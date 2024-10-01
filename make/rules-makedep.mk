# parameters:
#   $(1): lowercase package name
#   $(2): uppercase package name
#   $(3): 32/64/A64, build type
#
define create-rules-makedep
$(call create-rules-common,$(1),$(2),$(3))

$$(OBJ)/.$(1)-configure$(3):
	@echo ":: configuring $(3)bit $(1)..." >&2

	sed -e '1 i\UNIX_LIBS = $$(WINE_LIBDIR$(3))/$$(LIBDIR_WINE_$(3))/ntdll.so\n' \
	    -e '/^all:$$$$/,$$$$c all:' \
	    -e '/^SUBDIRS/,/[^\\]$$$$/c SUBDIRS = $$($(2)_SRC)' \
	    \
	    -e '/^srcdir/a objdir = $$(WINE_OBJ$(3))' \
	    -e '/^prefix/c prefix = $$($(2)_DST$(3))' \
	    -e '/^libdir/c libdir = $$($(2)_LIBDIR$(3))' \
	    -e '/^toolsdir/c toolsdir = $$(WINE_OBJ$(3))' \
	    \
	    -e '/^CFLAGS/c CFLAGS = $$($(2)_INCFLAGS$(3)) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))' \
	    -e '/^CPPFLAGS/c CPPFLAGS = $$($(2)_INCFLAGS$(3)) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3))' \
	    -e '/^CXXFLAGS/c CXXFLAGS = $$($(2)_INCFLAGS$(3)) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS$(3)) -std=c++17' \
	    -e '/^LDFLAGS/c LDFLAGS = $$($(2)_LIBFLAGS$(3)) $$($(2)_LDFLAGS$(3)) $$($(2)_LDFLAGS)' \
	    \
	    -e '/^x86_64_CC/a x86_64_CXX = $$(TARGET_CROSS64)-g++' \
	    -e '/^x86_64_CFLAGS/c x86_64_CFLAGS = $$($(2)_INCFLAGS64) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS64)' \
	    -e '/^x86_64_CPPFLAGS/c x86_64_CPPFLAGS = $$($(2)_INCFLAGS64) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS64)' \
	    -e '/^x86_64_CXXFLAGS/c x86_64_CXXFLAGS = $$($(2)_INCFLAGS64) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS64) -std=c++17' \
	    -e '/^x86_64_LDFLAGS/c x86_64_LDFLAGS = $$($(2)_LIBFLAGS64) $$($(2)_LDFLAGS64) $$(CROSSLDFLAGS)' \
	    \
	    -e '/^i386_CC/a i386_CXX = $$(TARGET_CROSS32)-g++' \
	    -e '/^i386_CFLAGS/c i386_CFLAGS = $$($(2)_INCFLAGS32) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS32)' \
	    -e '/^i386_CPPFLAGS/c i386_CPPFLAGS = $$($(2)_INCFLAGS32) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS32)' \
	    -e '/^i386_CXXFLAGS/c i386_CXXFLAGS = $$($(2)_INCFLAGS32) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGS32) -std=c++17' \
	    -e '/^i386_LDFLAGS/c i386_LDFLAGS = $$($(2)_LIBFLAGS32) $$($(2)_LDFLAGS32) $$(CROSSLDFLAGS)' \
	    \
	    -e '/^arm64ec_CC/a arm64ec_CXX = $$(TARGET_CROSSA64)-g++' \
	    -e '/^arm64ec_CFLAGS/c arm64ec_CFLAGS = $$($(2)_INCFLAGSA64) $$($(2)_CFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGSA64)' \
	    -e '/^arm64ec_CPPFLAGS/c arm64ec_CPPFLAGS = $$($(2)_INCFLAGSA64) $$($(2)_CPPFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGSA64)' \
	    -e '/^arm64ec_CXXFLAGS/c arm64ec_CXXFLAGS = $$($(2)_INCFLAGSA64) $$($(2)_CXXFLAGS) $$(COMMON_FLAGS) $$(COMMON_FLAGSA64) -std=c++17' \
	    -e '/^arm64ec_LDFLAGS/c arm64ec_LDFLAGS = $$($(2)_LIBFLAGSA64) $$($(2)_LDFLAGSA64) $$(CROSSLDFLAGS)' \
	    \
	    -e '/^PE_ARCHS/s/aarch64//' \
	    $$(WINE_OBJ$(3))/Makefile > $$($(2)_OBJ$(3))/Makefile

	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$(WINE_OBJ$(3))/tools/makedep

	touch $$@

$$(OBJ)/.$(1)-build$(3):
	@echo ":: building $(3)bit $(1)..." >&2
	+cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$(BEAR) $$(MAKE)
	cd "$$($(2)_OBJ$(3))" && env $$($(2)_ENV$(3)) \
	$$(MAKE) install
	touch $$@
endef

rules-makedep = $(call create-rules-makedep,$(1),$(call toupper,$(1)),$(2))

#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.72])
AC_INIT([flashcard], [0.0.1], [Creeperxie@outlook.com])
AC_CONFIG_HEADERS([config.h])
# Checks for programs.
AC_PROG_CXX
AC_PROG_INSTALL

# Checks for libraries.
AC_CONFIG_AUX_DIR([build-aux])
AC_LIB_LINKFLAGS([yaml-cpp])
AM_INIT_AUTOMAKE
# AC_CHECK_LIB(yaml-cpp,[LIBS="$LIBS -lyaml-cpp]")
# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL

# Checks for library functions.

AC_CONFIG_FILES([Makefile
                 src/Makefile])
AC_OUTPUT

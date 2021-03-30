AC_INIT([greeter],[1.0],[help@greeter.me])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CXX
SDL_VERSION=2.0.10
AM_PATH_SDL2($SDL_VERSION,
	:,
	AC_MSG_ERROR([*** SDL version $SDL_VERSION not found!])
)
CXXFLAGS="$CXXFLAGS $SDL_CXXFLAGS"
LIBS="$LIBS $SDL_LIBS"
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([
	Makefile
	src/Makefile
])
AC_OUTPUT


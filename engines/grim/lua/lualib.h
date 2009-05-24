/*
** $Id$
** Lua standard libraries
** See Copyright Notice in lua.h
*/


#ifndef lualib_h
#define lualib_h

#include "engines/grim/lua/lua.h"

void lua_iolibopen();
void lua_strlibopen();
void lua_mathlibopen();
void lua_iolibclose();

// To keep compatibility with old versions

#define iolib_open		lua_iolibopen
#define strlib_open		lua_strlibopen
#define mathlib_open	lua_mathlibopen

// Auxiliary functions (private)

int32 luaI_singlematch(int32 c, const char *p, const char **ep);

#endif


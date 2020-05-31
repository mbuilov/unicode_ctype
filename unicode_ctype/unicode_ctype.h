#ifndef UNICODE_CTYPE_H_INCLUDED
#define UNICODE_CTYPE_H_INCLUDED

/**********************************************************************************
* Support for LC_CTYPE unicode locale category
* Copyright (C) 2020 Michael M. Builov, https://github.com/mbuilov/unicode_ctype
* Licensed under Apache License v2.0, see LICENSE.TXT
**********************************************************************************/

/* unicode_ctype.h */

/* Get ctype by its name.
   Returns 0 if name is not known. */
#ifdef SAL_DEFS_H_INCLUDED /* include "sal_defs.h" for the annotations */
A_Nonnull_all_args
A_At(name, A_In_z)
A_Check_return
#endif
int unicode_ctype(const char name[]);

/* Check if unicode character has given ctype.
   Returns 0 if not or t is 0. */
#ifdef SAL_DEFS_H_INCLUDED /* include "sal_defs.h" for the annotations */
A_Check_return
#endif
int unicode_isctype(unsigned w, int t);

#endif /* UNICODE_CTYPE_H_INCLUDED */

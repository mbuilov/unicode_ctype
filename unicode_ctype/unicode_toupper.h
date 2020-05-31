#ifndef UNICODE_TOUPPER_H_INCLUDED
#define UNICODE_TOUPPER_H_INCLUDED

/**********************************************************************************
* Support for LC_CTYPE unicode locale category
* Copyright (C) 2020 Michael M. Builov, https://github.com/mbuilov/unicode_ctype
* Licensed under Apache License v2.0, see LICENSE.TXT
**********************************************************************************/

/* unicode_toupper.h */

/* Convert unicode character to upper case.
   Returns the same character code if there is no upper-case equivalent of the character */
#ifdef SAL_DEFS_H_INCLUDED /* include "sal_defs.h" for the annotations */
A_Check_return
#endif
unsigned unicode_toupper(unsigned w);

/* Convert unicode character to lower case.
   Returns the same character code if there is no lower-case equivalent of the character */
#ifdef SAL_DEFS_H_INCLUDED /* include "sal_defs.h" for the annotations */
A_Check_return
#endif
unsigned unicode_tolower(unsigned w);

#endif /* UNICODE_TOUPPER_H_INCLUDED */

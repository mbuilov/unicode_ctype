Description.
Small library implementing toupper/tolower/ctype/isctype LC_CTYPE locale dependent functions for unicode.

Unicode tables were generated under the OS with GNU libc 2.32 (with support of Unicode 13.0.0)

Author.
Copyright (C) 2020 Michael M. Builov, https://github.com/mbuilov/unicode_ctype

License.
Apache License v2.0, see LICENSE.TXT.

Optional dependencies.
"sal_defs.h" from https://github.com/mbuilov/cmn_headers


Building.
You need any c99 compiler,

for example gcc:
gcc -g -O2 -I. -c -Wall -Wextra ./src/unicode_ctype.c
gcc -g -O2 -I. -c -Wall -Wextra ./src/unicode_toupper.c
ar -crs libunicode_ctype.a ./unicode_ctype.o ./unicode_ctype.o

or MSVC:
cl /O2 /I. /c /Wall .\src\unicode_ctype.c
cl /O2 /I. /c /Wall .\src\unicode_toupper.c
lib /out:unicode_ctype.a .\unicode_ctype.obj .\unicode_toupper.obj



Also, the library can be built with source annotations (restricted pointers, non-null attributes, etc.)

gcc:
gcc -g -O2 -include ../cmn_headers/sal_defs.h -I. -c -Wall -Wextra ./src/unicode_ctype.c
gcc -g -O2 -include ../cmn_headers/sal_defs.h -I. -c -Wall -Wextra ./src/unicode_toupper.c
ar -crs libunicode_ctype.a ./unicode_ctype.o ./unicode_ctype.o

MSVC:
cl /O2 /FI..\cmn_headers\sal_defs.h /I. /c /Wall /wd4464 /analyze .\src\unicode_ctype.c
cl /O2 /FI..\cmn_headers\sal_defs.h /I. /c /Wall /wd4464 /analyze .\src\unicode_toupper.c
lib /out:unicode_ctype.a .\unicode_ctype.obj .\unicode_toupper.obj

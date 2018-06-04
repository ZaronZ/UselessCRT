#include "strings.h"

size_t __cdecl strlen(const char* str)
{
    const char* s;

    if (str == 0) return 0;

    for (s = str; *s; ++ s);

    return s - str;
}

#include "strings.h"

size_t __cdecl strnlen(const char* str, size_t count)
{
    const char* s;

    if (str == 0) return 0;

    for (s = str; *s && count; ++ s, -- count);

    return s - str;
}

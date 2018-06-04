#include "strings.h"

char* __cdecl strchr(const char* s, int c)
{
    char cc = c;

    while (*s)
    {
        if (*s == cc) return (char *)s;

        s++;
    }

    if (cc == 0) return (char *)s;

    return 0;
}

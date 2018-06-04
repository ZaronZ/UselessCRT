#include "strings.h"

char* __cdecl strrchr(const char* s, int c)
{
    char cc = c;
    const char* sp = (char *)0;

    while (*s)
    {
        if (*s == cc) sp = s;
        s ++;
    }

    if (cc == 0) sp = s;

    return (char *)sp;
}

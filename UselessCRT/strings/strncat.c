#include "strings.h"

char* __cdecl strncat(char* dst, const char* src, size_t n)
{
    if (n != 0)
    {
        char* d = dst;
        const char* s = src;

        while (*d != 0) ++ d;

        do
        {
            if ((*d = *s++) == 0) break;

            ++ d;
        }
        while (--n != 0);

        *d = 0;
    }

    return dst;
}

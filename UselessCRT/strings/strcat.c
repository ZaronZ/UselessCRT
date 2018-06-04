#include "strings.h"

char* __cdecl strcat(char* s, const char* append)
{
    char* save = s;

    for (; *s; ++s);

    while ((*s++ = *append++));

    return save;
}

#define EINVAL          22
#define ERANGE          34
int __cdecl strcat_s(char* dst, size_t elem, const char* src)
{
	size_t i, j;
	if (!dst) return EINVAL;
	if (elem == 0) return EINVAL;
	if (!src)
	{
		dst[0] = '\0';
		return EINVAL;
	}

	for (i = 0; i < elem; i++)
	{
		if (dst[i] == '\0')
		{
			for (j = 0; (j + i) < elem; j++)
			{
				if ((dst[j + i] = src[j]) == '\0') return 0;
			}
		}
	}
	/* Set the first element to 0, not the first element after the skipped part */
	dst[0] = '\0';
	return ERANGE;
}
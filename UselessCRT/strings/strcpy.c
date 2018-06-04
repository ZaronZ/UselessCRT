#include "strings.h"

char* __cdecl strcpy(char* to, const char* from)
{
    char* save = to;

    for (; (*to = *from); ++from, ++to);

    return save;
}

#define EINVAL          22
#define ERANGE          34
int __cdecl strcpy_s(char* dst, size_t elem, const char* src)
{
	size_t i;
	if (!elem) return EINVAL;
	if (!dst) return EINVAL;
	if (!src)
	{
		dst[0] = '\0';
		return EINVAL;
	}

	for (i = 0; i < elem; i++)
	{
		if ((dst[i] = src[i]) == '\0') return 0;
	}
	dst[0] = '\0';
	return ERANGE;
}
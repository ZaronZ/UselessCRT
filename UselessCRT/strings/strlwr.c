#include "strings.h"

char* __cdecl _strlwr(char *x)
{
	char  *y=x;

	while (*y) {
		*y=tolower(*y);
		y++;
	}
	return x;
}

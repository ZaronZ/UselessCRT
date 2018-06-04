#include "strings.h"

char* __cdecl _strupr(char *x)
{
	char  *y=x;

	while (*y) {
		*y=toupper(*y);
		y++;
	}
	return x;
}

#include "ctype.h"

int __cdecl isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int __cdecl isalpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int __cdecl isspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == '\12');
}

int __cdecl isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int __cdecl toupper(int c)
{
    return (islower(c) ? ((c) - 0x20) : (c));
}

int __cdecl tolower(int c)
{
    return (isupper(c) ? ((c) + 0x20) : (c));
}

#pragma once
#include "../types.h"

int __cdecl isupper(char c);
int __cdecl islower(char c);
int __cdecl isalpha(char c);
int __cdecl isspace(char c);
int __cdecl isdigit(char c);
int __cdecl toupper(int c);
int __cdecl tolower(int c);
char* __cdecl strcat(char* s, const char* append);
int __cdecl strcat_s(char* dst, size_t elem, const char* src);
char* __cdecl strchr(const char* s, int c);
int __cdecl strcmp(const char* s1, const char* s2);
char* __cdecl strcpy(char* to, const char* from);
int __cdecl strcpy_s(char* dst, size_t elem, const char* src);
int __cdecl _stricmp(const char *s1, const char *s2);
int __cdecl _strcmpi(const char *s1, const char *s2);
size_t __cdecl strlen(const char* str);
char* __cdecl _strlwr(char *x);
char* __cdecl strncat(char* dst, const char* src, size_t n);
int __cdecl strncmp(const char* s1, const char* s2, size_t n);
char* __cdecl strncpy(char* dst, const char* src, size_t n);
int __cdecl _strnicmp(const char *s1, const char *s2, size_t n);
size_t __cdecl strnlen(const char* str, size_t count);
char* __cdecl strrchr(const char* s, int c);
char* __cdecl strstr(const char *s, const char *find);
unsigned long long __cdecl strtoull(const char *nptr, char **endptr, int base);
char* __cdecl _strupr(char *x);
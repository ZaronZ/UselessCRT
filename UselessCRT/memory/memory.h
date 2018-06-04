#pragma once
#include "../types.h"

void* __cdecl _memccpy(void* to, const void* from, int c, size_t count);
void* __cdecl memchr(const void* s, int c, size_t n);
int __cdecl memcmp(const void* s1, const void* s2, size_t n);
void* __cdecl memcpy(void* dest, const void* src, size_t count);
int __cdecl _memicmp(const void* s1, const void* s2, size_t n);
void* __cdecl memmove(void* dest, const void* src, size_t count);
void* __cdecl memset(void* src, int val, size_t count);

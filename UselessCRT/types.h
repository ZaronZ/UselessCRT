#ifdef _WIN64
typedef unsigned __int64 size_t;
typedef __int64 ptrdiff_t;
typedef __int64 intptr_t;
#else
typedef unsigned int size_t;
typedef int ptrdiff_t;
typedef int intptr_t;
#endif

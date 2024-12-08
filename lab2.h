#ifndef LAB2_H
#define LAB2_H

#include <stddef.h>

// Прототипы функций
char* strreverse(const char *str);
char* strcut(const char *str, size_t start, size_t len);
char* strreplace(const char *str, const char *old_sub, const char *new_sub);
size_t strfindlastof(const char *str, const char *chars);
int strispalindrome(const char *str);
size_t strcountwords(const char *str);
char** strtowords(const char *str, size_t *count);
int strisipv4(const char *str);
size_t* strcountchars(const char *str);

#endif

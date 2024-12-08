#include "lab2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* strtolower(char *str) {
    char *p = str;
    while (*p) {
        *p = tolower((unsigned char)*p);
        p++;
    }
    return str;
}

char* strtoupper(char *str) {
    char *p = str;
    while (*p) {
        *p = toupper((unsigned char)*p);
        p++;
    }
    return str;
}

int strcmp_insensitive(const char *str1, const char *str2) {
    while (*str1 && *str2) {
        char c1 = tolower((unsigned char)*str1);
        char c2 = tolower((unsigned char)*str2);
        if (c1 != c2) return c1 - c2;
        str1++;
        str2++;
    }
    return tolower((unsigned char)*str1) - tolower((unsigned char)*str2);
}
size_t strfindlastof(const char *str, const char *chars);
int strispalindrome(const char *str);
size_t strcountwords(const char *str);
char** strtowords(const char *str, size_t *count);
int strisipv4(const char *str);
size_t* strcountchars(const char *str);

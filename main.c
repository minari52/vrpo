#include <stdio.h>
#include <stdlib.h>
#include "lab2.h"
#include <ctype.h>
int main() {
    char str1[] = "HELLO";
    printf("strtolower: %s\n", strtolower(str1));

    char str2[] = "hello";
    printf("strtoupper: %s\n", strtoupper(str2));

    printf("strcmp_insensitive: %d\n", strcmp_insensitive("hello", "HELLO"));

    char str3[] = "reverse";
    printf("strreverse: %s\n", strreverse(str3));

    char str4[] = "hello";
    printf("4: %s\n", strreverse(str4)); // olleh

    char str5[] = "hello";
    printf("5: %s\n", strcut(str5, 0, 5)); // hello

    char str6[] = "hello";
    printf("6: %s\n", strcut(str6, 0, 4)); // hell

    char str7[] = "hello world";
    char *str7_res = strreplace(str7, "world", "everyone");
    printf("7: %s\n", str7_res); // hello everyone
    free(str7_res);

    char str8[] = "hello";
    printf("8: %s\n", strcut(str8, 0, 4)); // hell

    char str9[] = "hello";
    printf("9: %zu\n", strfindlastof(str9, "abcde")); // 1

    char str10[] = "Go hang a salami I'm a lasagna hog";
    printf("10: %d\n", strispalindrome(str10)); // 1

    char str11[] = "Was it a car or a cat I saw?";
    printf("11: %zu\n", strcountwords(str11)); // 9

    size_t count = 0;
    char str12[] = "Was it a car or a cat I saw?";
    char **words = strtowords(str12, &count);
    printf("12: ");
    for (size_t i = 0; i < count; i++) {
        printf("%s;", words[i]);
        free(words[i]);
    }
    free(words);
    printf("\n");

    printf("13: %d %d %d %d\n", strisipv4("192.168.1.0"), strisipv4("192.168.1.0/24"), strisipv4("192.168.0.256"), strisipv4("092.01.0.1"));

    char str14[] = "hello";
    size_t *counts = strcountchars(str14);
    printf("14: %zu\n", counts['l']);
    free(counts);

    return 0;
}

#include <stdio.h>
#include "srting_.h"

size_t strlen1(char *s) {
    int i = 0;
    while (s[i] != '\0')
        i++;

    return i;
}


size_t strlen2(char *s) {
    int i = 0;
    while (*s != '\0') {
        i++;
        s++;
    }

    return i;
}

size_t strlen_(const char *begin) {
    char *end = begin;
    while (*end != '\0')
        end++;
    return end - begin;
}

char* find(char *begin, char *end, int ch) {
    while (begin != end && *begin != ch)
        begin++;
    return begin;
}
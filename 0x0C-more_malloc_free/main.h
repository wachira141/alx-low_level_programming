#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void *malloc_checked(unsigned int b);
int _putchar(char c);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int main(void);
char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif


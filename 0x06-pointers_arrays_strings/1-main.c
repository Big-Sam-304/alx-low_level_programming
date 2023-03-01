#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}

char *_strncat(char *dest, char *src, int n)
{
        char *p = dest;

        while (*p != '\0')
        {
                p++;
        }
        int i;

        for (i = 0; i < n && src[i] != '\0'; i++)
        {
                *p++ = src[i];
        }
        *p = '\0';
        return (dest);
}

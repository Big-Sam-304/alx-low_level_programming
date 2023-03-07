#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}

unsigned int _strspn(char *s, char *accept)
{
        int count;

        count = 0;
        while (*s)
        {
                while (*accept != '\0')
                {
                        if (*s == *accept)
                        {
                                count++;
                                break;
                        }
                        *accept++;
                }
                if (*accept == '\0')
                {
                        return (count);
                }
                *s++;
        }
        return (count);
}

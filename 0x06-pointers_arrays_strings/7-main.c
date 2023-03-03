#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}

char *leet(char *s)
{
        int i, j;

        char leet_char[5] = {'A', 'E', 'O', 'T', 'L'};

	char leet_num[5] = {'4', '3', '0', '7', '1'};
	
	for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        if (s[i] == leet_char[j] || s[i] == leet_char[j] + 32)
                        {
                                s[i] = leet_num[j];
                                break;
                        }
                }
        }
        return (s);
}

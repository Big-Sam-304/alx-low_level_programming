#include "main.h"
/**
 * rot13 - encodes a string using rot 13
 * @s: string
 * Return: s (success)
 */

char *rot13(char *s)
{
        int i, j;

        char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

        char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; alpha[j] != '\0'; j++)
                {
                        if (s[i] == alpha[j])
                        {
                                s[i] = rot[j];
                                break;
                        }
                }
        }
        return (s);
}

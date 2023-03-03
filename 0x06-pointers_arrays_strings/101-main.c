#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n / 10 != 0) {
        print_number(n / 10);
    }
    _putchar(n % 10 + '0');
}
int _putchar(char c)
{
	return (write(1, &c, 1));
}

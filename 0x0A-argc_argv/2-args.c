#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: counts the number of arguments passed
 * @argv: pointer to array of strings of the arguments passed
 *
 * Return: On success(0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

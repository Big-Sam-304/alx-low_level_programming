#include <stdio.h>
#include <stdlib.h>

/**
 * _calculate_coins - calculates the minimum amount of coins
 * to be returned for change.
 * @cents: the amount of which to determine the number of
 * coins to give.
 *
 * Return: minimum number of coins for change.
 */

int _calculate_coins(int cents);

int _calculate_coins(int cents)
{
	unsigned long int i;

	int numCoins, coins[] = {25, 10, 5, 2, 1};

	numCoins = 0;

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
	}
	return (numCoins);
}

/**
 * main - calls the _calculate_coins function
 * @argc: number of arguments passed.
 * @argv: pointer to strings of the args passed.
 *
 * Return: On success(0)
 * On Error(1)
 */

int main(int argc, char *argv[])
{
	int cent, numCoin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);

	if (cent < 0)
	{
		printf("0\n");
	}
	else
	{
		numCoin = _calculate_coins(cent);
		printf("%d\n", numCoin);
	}
	return (0);
}

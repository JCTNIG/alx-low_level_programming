#include <stdio.h>
#include <stdlib.h>

/**
 * main - print integar 0-10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nu = 0;

	while (nu < 10)
	{
		printf("%d", nu);
		nu++;
	}
	putchar('\n');

	return (0);
}

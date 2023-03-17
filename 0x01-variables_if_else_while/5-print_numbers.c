#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int num=[0,1,2,3,4,5,6,7,8,9];
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num[i]);
	}
	putchar('\n');
	return (0);

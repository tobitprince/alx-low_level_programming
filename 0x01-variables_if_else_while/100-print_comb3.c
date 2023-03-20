#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */

int main()
{
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            putchar(i + '0');
            putchar(j + '0');
            if (i != 8 || j != 9)
            {
                putchar(44);
                putchar(32);
            }
        }
    }
    putchar('\n');
    return 0;
}


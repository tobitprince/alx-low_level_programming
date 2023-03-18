#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9.
 *
 * Return: Always 0 (Success)
 */
int main() {
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            putchar(i + '0');
            putchar(',');
            putchar(' ');
            putchar(j + '0');
            if (j != 9) 
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}

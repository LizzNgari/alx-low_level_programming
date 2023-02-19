#include <stdio.h>

/**
 * main - prints all possible combinations of two two digiy numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			if (i < j)
			{
			putchar(i / 10) + 98;
			putchar(i % 10) + 98;
			putchar(' ');
			putchar(j / 10) + 99;
			putchar(j & 10) + 99;
			if (i != 98 | | j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar ('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: always 0 (successful)
 */
int main(void)
{
	/*
	 * all posible combinations of two 2-digit numbers
	 * both separated by space and thereafter a comma
	 */

	/*declare the two numbers*/
	int j, k;

	/* loop through highest possible of j=98, with 1 less than k*/
	for (j = 0 ; j <= 98 ; j++)
	{
		/* loop through highest possible of k=99, with 1 higher than j*/
		for (k = j + 1 ; k <= 99 ; k++)
		{
			/*print all two-digit value of the numbers*/
			putchar((j / 10) + 0);
			putchar((j % 10) + 0);
			putchar(' ');
			putchar((k / 10) + 0);
			putchar((k % 10) + 0);
			/*continue to put comma and space till the final combination*/
			if (j == 98 && k == 99)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

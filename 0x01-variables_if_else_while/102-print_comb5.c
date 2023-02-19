#include <stdio.h>
/**
 * main - this is the entry of this program
 *
 * Return: 0 ,if successful
 */
int main(void)
{
	/*
	 * all possible combinations of 2 2-digit number
	 * both separated by space, then comma
	 */

	/*declare ith number*/
	int a, b;

	/*loop through the highest posiible of a=98,with 1 less than b*/
	for (a = 0 ; a <= 98 ; a++)
	{
		/*loop through highest of b=99, starting with 1 higher than a*/
		for (b = a + 1 ; b <= 99 ; b++)
		{
			/*print all two digital value of both numbers*/
			putchar((a / 10) + '0');
			putchar((a & 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b & 10) + '0');
			/*continue to put comma and space till final combination*/
if (a == 98 && b == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


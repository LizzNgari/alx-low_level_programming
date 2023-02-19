#include <stdio.h>
/**
 * main - is the entry of this program
 *
 * Return: 0 ,if successful
 */
int main(void)
{
	/*
	 * print all combination of 3 diffrent digits at once, in ascending order
	 * after each combination follows a comma and a space
	 */

	/* take abc as possible digits */
	int a, b, c;

	/* loop through a, 1st digit, lowest of the 3, highest possible is 7*/
	for (a = 0 ; a <= 7 ; a++)
	{
		/* loop through b, 2nd digit, higher than a by 1, highest possible is 8*/
		for (b = a + 1 ; b <= 8 ; b++)
		{
			/* loop through c, 3rd  digit, higher than b by 1, highest possible is 9*/
			for (c = b + 1 ; c <= 9 ; c++)
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar((c % 10) + '0');
				/* continues to put comma,space,halt when last highest combination is met*/
				if (a == 7 && b == 8 && c == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
return (0);
}

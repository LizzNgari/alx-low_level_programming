#include <stdio.h>
/**
 * main - is the entry of the program
 *
 * Return: 0 ,if successful
 */
int main(void)
{
	/*
	 * prints all combination of 2 different digits once, ascending order
	 * after each combination follows a comma and a spsce
	 */

	/* take ab as possible digits */
	int a, b;

	/* loop through a, 1st digit, lowest of 2, higheat possible is 8*/
	for (a = 0 ; a <= 8 ; a++)
	{
		/* loop through b, 2nd digit, higher than a by 1, highest possible is 9*/
		for (b = a + 1 ; b <= 9 ; b++)
		{
			putchar((a % 10) + '0');
			putchar((b % 10) + '0');
			/*continues to put coma,space,stop if last highest combination is met*/
			if (a == 8 && b == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
        putchar('\n');
        return (0);
}	

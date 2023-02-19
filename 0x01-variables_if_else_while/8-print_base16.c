#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all the numbers of base 16 lowercase
 *
 * Return: 0 ,if successful
 */
int main(void)
{
	/*
	 * prints the hexadecimal base 16 using putchar only
	 * loops through 9-0, prints them simulating char with arithmetics
	 * loops through a-f, prints them
	 */
	int x;
	int y;

	for (x = 0 ; x < 10 ;  x++)
		putchar((x % 10) + '0');
	for (y = 'a' ; y <= 'f' ; y++)
	       putchar(y);
putchar('\n');
	return (0);
}

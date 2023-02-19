#include <stdio.h>
#include <ctype.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Return: 0 , if successful
 */
int main(void)
{
	/*
	 * prints all single numbers of base 10
	 * starting from zero, only using putchar, no char variables
	 */
	int x;

	for  (x = 0 ; x < 10 ; x++)
		putchar ((x % 10 + '0'));
	putchar('\n');
	return (0);
}

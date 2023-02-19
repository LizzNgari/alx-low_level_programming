#include <stdio.h>
#include <ctype.h>
/**
 * main - prints lowercase alphabets in reverse
 *
 * Return: 0 ,if successful
 */
int main(void)
{
	char rv;

	/*
	 * loops through the alphabet from behind
	 * to print the alphabets from reverse
	 */
	for (rv = 'z' ; rv >= 'a' ; rv--)
		putchar(rv);
	putchar('\n');
	return (0);
}

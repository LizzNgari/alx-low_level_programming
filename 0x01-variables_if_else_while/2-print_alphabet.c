#include <stdio.h>
#include<ctype>
/**
 * main- is the ain entry of the program
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

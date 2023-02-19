#include <stdio.h>
#include <ctype.h>
/**
 * main - function that prints alphabet in lowercase in uppercase
 *
 * Return: 0 ,if successful
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'a' ; i <= 'z' ; i++)
		putchar(toupper(i));
	putchar('\n');
	return (0);
}

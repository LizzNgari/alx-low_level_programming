#include <stdio.h>
/**
 * main - Program that prints the size of various types on the computer
 * Return: 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Sixe of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an in: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a log int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}

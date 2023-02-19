#include <stdlib.h>
#include <time.h>
/*more headers go here */
/**
 * main - is the main entry of the program
 *
 * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("last digit of %d is %d and is greater than 5", n, m);
	else if (m == 10)
		printf("Last digit of %d is %d and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and is not zero", n, m)
	printf("\n");
	return (0);
}

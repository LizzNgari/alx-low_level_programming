#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: first integer -a swaps with b
 * @b: second integer -b swaps with a
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

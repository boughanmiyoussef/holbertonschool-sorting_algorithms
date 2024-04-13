#include <stdio.h>
#include "sort.h"

/**
 * swap - Function
 *
 * @a: Fisrt value
 * @b: Second value
 * Return: 0
 */
void swap(int *a, int *b)
{
int tmp;

tmp = *b;
*b = *a;
*a = tmp;
}

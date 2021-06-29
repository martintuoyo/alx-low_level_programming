#include "holberton.h"

/**
 * swap_int - swaps int a and int b
 *
 * @a: Becoming a c wiz
 *
 * @b: second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int x;
 
x = *a;
*a = *b;
*b = x;
return;
}

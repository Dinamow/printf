#include "main.h"

/**
 * printf_HEX_aux - prints an hexgecimal number.
 * @num: number to print.
 * Return: counter.
 */
int printf_HEX_aux(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

}
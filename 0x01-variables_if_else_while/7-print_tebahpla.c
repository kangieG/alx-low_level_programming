#include <stdio.h>
/**
 * main- Entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	char gladys;

	for (gladys = 'z'; gladys >= 'a'; gladys--)
		putchar(gladys);
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main- Entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	char gladys;

	for (gladys = 'a'; gladys <= 'z'; gladys++)
		putchar(gladys);
	for (gladys = 'A'; gladys <= 'Z'; gladys++)
		putchar(gladys);
	putchar('\n');
	return (0);
}

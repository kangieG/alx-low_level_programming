#include <stdio.h>
/**
 * main- Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	char gladys;

	for (gladys = 'a'; gladys <= 'z'; gladys++)
		if (gladys != 'q' && gladys != 'e')
			putchar(gladys);
	putchar('\n');

	return (0);
}

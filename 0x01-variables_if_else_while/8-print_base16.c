#include <stdio.h>
/**
 * main- Entry point
 *Return: Always 0 (success)
 */

int main(void)
{
	char glad;
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (glad = 'a'; glad < 'g'; glad++)
		putchar(glad);
	putchar('\n');

	return (0);
}

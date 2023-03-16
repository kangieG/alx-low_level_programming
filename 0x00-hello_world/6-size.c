#include<stdio.h>
/**
*main-Program prints size of the types on computer it is compiled and run on
*Return:0
*/
int main(void);
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n", (unsigned int)sizeof(f));
return (0);
}

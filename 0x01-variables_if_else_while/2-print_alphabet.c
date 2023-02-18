#include <stdio.h>
/**
*main - prints alphabet in lowercase
*Return: is going to be 0
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
		putchar('\n');
	}
	return (0);
}

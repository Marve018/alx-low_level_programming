#include "main.h"
/**
*_islower - checks for the lower case characters
*@c: parameter to be checked
*Return: 1 if is lowercase otherwise 0
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

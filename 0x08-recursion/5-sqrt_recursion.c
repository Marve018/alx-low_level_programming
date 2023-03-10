#include "main.h"

/**
 *main_sqrt - function that finds the square root
 *@a: number being calculated
 *@b: iterator
 *Return: the function
 */
int main_sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (main_sqrt(a, b + 1));
}

/**
 *_sqrt_recursion - function that returns the natural
 *square root of a number
 *@n: input number
 *Return: 0
 */
int _sqrt_recursion(int n)
{
	return (main_sqrt(n, 1));
}

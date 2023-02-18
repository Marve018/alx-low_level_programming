#include <stdio.h>
/**
*main - main function
*Return: 0
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 0; j <= 9; j++)
	{
		 putchar(j + '0');
	}
			for (k = 0; k <= 9; j++)
			{
				for (l = 0; l <= 9; l++)
				{
					if ((i < k) || ((i == k) && (j < l)))
					{
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
						if (i != 9 || j != 8 || k != 9 || l != 9)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
	putchar('\n');
	return (0);
}

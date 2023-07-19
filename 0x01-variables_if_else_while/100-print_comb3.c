#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';
	
	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i < j)
			{
				putchar (i);
				putchar(j);
				if (i != '0' || (i == '0' && j != '9'))
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

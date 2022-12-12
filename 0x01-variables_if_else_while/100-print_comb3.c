#include <stdio.h>
/**
 * main - print all possible different combination of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ones = '0';
	int tens = '0';

	for (tens = '0'; tens <= '0'; tens++) /* print tens digits*/
	{
		for (ones = '0'; ones <= '0'; ones++)/* print ones digits*/
		{
			if (!((ones == tens) || (tens > ones))) /*eliminating repitition*/
			{
				putchar(tens);
				putchar(ones);
				if (!(ones == '0' && tens == '0'))/* adding comma and space*/
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

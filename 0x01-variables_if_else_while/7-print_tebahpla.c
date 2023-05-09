#include <stdio.h>
/**
 * main -m prints lower case alphabet i reverse
 * Return: Always (0) (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}

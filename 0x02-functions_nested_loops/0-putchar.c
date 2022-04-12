#include "main.h"

/**
* main - Print the word "_putchar"
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	char p[] = "_putchar";

	for (i = 0; i < 8; i++)
		{
		printf(p[i]);
		}
		printf('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Print the alphabet without q and e.
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; I++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}

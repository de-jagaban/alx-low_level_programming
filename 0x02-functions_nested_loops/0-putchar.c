#include "main.h"
/**
 * main - main block
 * Description: Prints "_putchar" followed by a new line
 * Return: 0
 */
int main(void)
{
	char b[] = "_putchar";
	int i = 0;

	while (b[1] != '\0')
	{
		_putchar(b[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

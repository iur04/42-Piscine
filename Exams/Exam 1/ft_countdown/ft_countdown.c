/* Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$> */

#include <unistd.h>

int	main()
{
	char n;

	n = '9';
	while (n >= '0')
	{
		write (1, &n, 1);
		n--;
	}
	write (1, "\n", 1);
	return (0);
}

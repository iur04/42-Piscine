/* Assignment name  : ft_print_numbers
Expected files   : ft_print_numbers.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a function that displays all digits in ascending order.

Your function must be declared as follows:

void	ft_print_numbers(void); */

#include <unistd.h>

int	main()
{
	char c;

	c = '0';
	while (c <= '9')
	{
		write (1, &c, 1);
		c++;
	}
	write (1, "\n", 1);
	return (0);
}

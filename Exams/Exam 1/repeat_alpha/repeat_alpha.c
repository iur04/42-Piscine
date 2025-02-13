/* Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$> */

#include <unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

int	ft_count_rep(char c)
{
	int rep;

	if (c >= 'A' && c <= 'Z')
	{
		rep = c - 'A' + 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		rep = c - 'a' + 1;
	}
	else
		rep = 1;
	return (rep);
}

int	main(int ac, char **av)
{
	int	rep;

	if (ac > 1)
	{
		while (*av[1])
		{
			rep = ft_count_rep(*av[1]);
			while (rep--)
				ft_putchar(*av[1]);
			av[1]++;
		}
	}
	ft_putchar('\n');
	return(0);
}



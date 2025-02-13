/* Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.

Examples :

$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$ */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

char	change_letter(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	else if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

int	main(int ac, char **av)
{
	int	i;
	char	c;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i])
		{
			c = change_letter(av[1][i]);
			ft_putchar(c);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

/* Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:
 */

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int neg;

	i = 0;
	neg = 1;
	n = 0;
	if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			neg *= -1;
		}
		i++;
	}
	while (str[i])
	{
		n = (n * 10) + (str[i] - 48);
		i++;
	}
	return (n * neg);
}

/* Assignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:
 */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	i;
	char	*cpy;

	i = 0;
	while (src[i])
	{
		i++;
	}
	cpy = (char *)malloc(i * sizeof(char));
	if (!cpy)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main(void)
{
	printf("%s\n", ft_strdup("Chilling with Malloc"));
	return (0);
}

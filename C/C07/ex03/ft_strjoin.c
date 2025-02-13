/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:19:54 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/11 19:22:59 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_countstrs(int size, char **arr, char *sep)
{
	int	i;
	int	leng;

	i = 0;
	leng = 0;
	while (i < size)
	{
		leng += ft_strlen(arr[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		leng += ft_strlen(sep);
		i++;
	}
	return (leng);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (dest[i] != '\0')
		i++;
	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		size2;
	char	*new;

	i = 0;
	size2 = ft_countstrs(size, strs, sep);
	if (size == 0)
	{
		new = (char *)malloc(sizeof(char));
		new[i] = '\0';
		return (new);
	}
	new = (char *)malloc((size2 + 1) * sizeof(char));
	while (!new)
		return (NULL);
	new[0] = '\0';
	while (i < size)
	{
		ft_strcat (new, strs[i]);
		if (i < size - 1)
			ft_strcat(new, sep);
		i++;
	}
	return (new);
}

/* int	main(int ac, char **av)
{
	int		size = 4;
	char	sep[] = " _ ";
	char	*strs[] = {"Chimi", "is", "a", "churri"};
	int		i = 0;
	char	*new = ft_strjoin(size, strs, sep);

	while (i < size)
	{
		printf ("Initial String %d: %s\n", i, strs[i]);
		i++;
	}
	printf ("New String: %s\n", new);
	free(new);
} */

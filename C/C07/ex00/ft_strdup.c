/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 18:58:51 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/10 21:18:52 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
	{
		i++;
	}
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* int	main()
{
	char str[] = "Chimichurri!";
	printf("%s", ft_strdup(str));
	return (0);
}
 */

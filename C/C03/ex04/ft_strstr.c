/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:14:29 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/11 14:08:03 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + l] == to_find[l] && str[i + l] != '\0')
			l++;
		if (to_find[l] == '\0')
			return (str + i);
		i++;
		l = 0;
	}
	return (0);
}

/* int main()
{
char str[] = "Chimi!";
char to_find[] = "churri";
char *result = ft_strstr(str, to_find);
printf("Substring found: %s\n", result);
return 0;
} */

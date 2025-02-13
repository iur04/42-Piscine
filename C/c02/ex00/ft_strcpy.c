/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:49:50 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/29 10:40:50 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// char src[] = "Buenas!";
// char dest[50];  // Dest must have enough space to store the intended string

// // Function that copies the information from src to dest
// ft_strcpy(dest, src);

// // prints the copied string
// printf("Initial String: %s\n", src);
// printf("Dest String: %s\n", dest);

// return 0;
// }

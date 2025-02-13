/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 00:26:42 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/11 12:50:43 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (len);
}

// int main()
// {
// // Test case 1: Copy a string with sufficient space
// char src1[] = "Chimichurri!";
// char dest1[20]; // Enough space for the copied string and null terminator
// unsigned int len1 = ft_strlcpy(dest1, src1, sizeof(dest1));
// printf("Copied string: '%s', Source length: %u\n", dest1, len1);

// // Test case 2: Copy a string with limited space in destination
// char dest2[6];  // Not enough space for the entire string
// unsigned int len2 = ft_strlcpy(dest2, src1, sizeof(dest2));
// printf("Copied string: '%s', Source length: %u\n", dest2, len2);

// // Test case 3: Copy an empty string
// char src3[] = "";
// char dest3[20];
// unsigned int len3 = ft_strlcpy(dest3, src3, sizeof(dest3));
// printf("Copied string: '%s', Source length: %u\n", dest3, len3);

// return 0;
// }

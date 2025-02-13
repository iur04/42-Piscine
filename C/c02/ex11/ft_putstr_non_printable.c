/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 01:18:40 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/11 15:46:00 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write (1, &hex[c / 16], 1);
	write (1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write (1, "\\", 2);
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

/* int main()
{
    // Testing the function with non printable chars
    char str[] = "Chimi\nxurri\t";
    ft_putstr_non_printable(str);
    return 0;
} */

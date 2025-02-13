/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 21:54:47 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/04 21:14:02 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((i * i) <= nb)
	{
		if ((i * i) == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}

// int main()
// {
// 	int nb;

// 	nb = 0;
// 	ft_sqrt(nb);
// 	printf("Square Root: ('0')\n %d", ft_sqrt(nb));

// 	nb = 9;
// 	printf("\nSquare Root: ('9')\n %d", ft_sqrt(nb));

// 	nb = 25;
// 	printf("\nSquare Root: ('25')\n %d", ft_sqrt(nb));

// 	nb = 30;
// 	printf("\nSquare Root: ('30')\n %d", ft_sqrt(nb));
// }

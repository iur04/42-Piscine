/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 17:04:02 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/04 21:14:29 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb <= 1)
		return (0);
	div = 2;
	while (div <= nb / div)
	{
		if (nb % div == 0)
		{
			return (0);
		}
		div++;
	}
	return (1);
}

// int main()
// {
// 	int numb;

// 	numb = 11;
// 	ft_is_prime(numb);
// 	printf("Primo: %d", ft_is_prime(numb));

// 	numb = 1;
// 	printf("\nNao Primo: %d\n", ft_is_prime(1));
// }

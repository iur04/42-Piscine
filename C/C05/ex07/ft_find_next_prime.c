/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 20:28:37 by rupinto-          #+#    #+#             */
/*   Updated: 2025/02/06 21:11:44 by rupinto-         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
	{
		return (2);
	}
	while (nb >= 2)
	{
		if (ft_is_prime(nb))
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}

int main()
{
	int numb;

	numb = 11;
	ft_find_next_prime(numb);
	printf("Primo (11): %d", ft_find_next_prime(numb));

	numb = 4;
	printf("\nNao Primo (1): %d\n", ft_find_next_prime(4));
}

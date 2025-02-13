/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 23:59:26 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/26 19:17:51 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	k;

	k = *a;
	*a = *b;
	*b = k;
}

// int	main()
// {
//     int x = 5;
//     int y = 10;

//     // Imprime os valores antes da troca
//     printf("Antes da troca: x = %d, y = %d\n", x, y);

//     // Chama a função ft_swap para trocar os valores de x e y
//     ft_swap(&x, &y);

//     // Imprime os valores depois da troca
//     printf("Depois da troca: x = %d, y = %d\n", x, y);

//     return 0;
// }

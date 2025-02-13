/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 01:01:30 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/26 19:23:26 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (b != 0)
	{
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}

// int main()
// {
//     int x = 10;
//     int y = 3;

//     // Imprime os valores antes da operação
//     printf("Antes: x = %d, y = %d\n", x, y);

//     // Chama a função para realizar a divisão e o módulo
//     ft_ultimate_div_mod(&x, &y);

//     // Imprime os valores depois da operação
//     printf("Depois: x = %d (divisão), y = %d (módulo)\n", x, y);

//     return 0;
// }

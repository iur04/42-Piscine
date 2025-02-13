/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 00:50:58 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/26 19:22:36 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int main()
// {
//     int a = 10, b = 3;
//     int div, mod;

//     ft_div_mod(a, b, &div, &mod);

//     // Exibe os resultados
//     printf("Divisão de %d por %d:\n", a, b);
//     printf("Quociente: %d\n", div);
//     printf("Resto: %d\n", mod);

//     return 0;
// }

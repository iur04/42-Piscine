/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 03:08:19 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/26 19:15:24 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	end;
	int	start;

	start = 0;
	end = size - 1;
	while (start <= end)
	{
		temp = tab[start];
		tab[start] = tab[end];
		tab[end] = temp;
		start++;
		end--;
	}
}

// int main()
// {
//     int tab[] = {1, 2, 3, 4, 5};  // Array de inteiros
//     int size = 5;  // Tamanho do array

//     // Imprime o array antes de inverter
//     printf("Antes de inverter: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     // Chama a função para inverter o array
//     ft_rev_int_tab(tab, size);

//     // Imprime o array depois de inverter
//     printf("Depois de inverter: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     return 0;
// }

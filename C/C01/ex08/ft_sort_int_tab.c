/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 03:39:29 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/26 19:27:24 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	p;
	int	e;

	e = 0;
	p = 0;
	size -= 1;
	while (p < size)
	{
		e = 0;
		while (e < size - p)
		{
			if (tab[e] > tab[e + 1])
			{
				temp = tab[e];
				tab[e] = tab[e + 1];
				tab[e + 1] = temp;
			}
			e++;
		}
		p++;
	}
}

// int main()
// {
//     int tab[] = {5, 2, 8, 1, 3}; // Array de inteiros não ordenado
//     int size = sizeof(tab) / sizeof(tab[0]); // Cal o número de elem na Array

//     printf("Array antes de ordenar:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     // Chama a função para ordenar o Array
//     ft_sort_int_tab(tab, size);

//     printf("Vetor depois de ordenar:\n");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", tab[i]);
//     }
//     printf("\n");

//     return 0;
// }

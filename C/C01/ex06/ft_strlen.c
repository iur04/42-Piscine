/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 02:41:53 by rupinto-          #+#    #+#             */
/*   Updated: 2025/01/26 19:24:00 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int main()
// {
//     char str[] = "Olá, mundo!";  // Define a string que vamos medir

//     // Chama a função ft_strlen para obter o comprimento da string
//     int length = ft_strlen(str);

//     // Imprime o comprimento da string
//     printf("O comprimento da string \"%s\" é: %d\n", str, length);

//     return 0;
// }

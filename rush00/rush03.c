/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rupinto- <rupinto-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 18:23:21 by mmarceli          #+#    #+#             */
/*   Updated: 2025/01/26 19:43:58 by rupinto-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	linhas(int lar, char prim, char meio, char final)
{
	int	j;

	j = 0;
	while (j < lar)
	{
		if (j == 0)
			ft_putchar(prim);
		else
		{
			if (j == lar - 1)
				ft_putchar(final);
			else
				ft_putchar(meio);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0 || i == y - 1)
			linhas(x, 'A', 'B', 'C');
		else
			linhas(x, 'B', ' ', 'B');
		i++;
	}
}

// Função que imprime um único caractere na saída
void	ft_putchar(char c);

// Função que desenha uma linha com um início, meio e fim específicos
void	linhas(int lar, char prim, char meio, char final)
{
	int	j; // Variável para controlar a posição na linha

	j = 0; // Começa na posição 0
	while (j < lar) // Enquanto a posição for menor que a largura da linha
	{
		if (j == 0) // Se for o primeiro caractere da linha
			ft_putchar(prim); // Imprime o caractere do início (prim)
		else
		{
			if (j == lar - 1) // Se for o último caractere da linha
				ft_putchar(final); // Imprime o caractere do fim (final)
			else // Para todos os outros caracteres no meio
				ft_putchar(meio); // Imprime o caractere do meio (meio)
		}
		j++; // Vai para a próxima posição
	}
	ft_putchar('\n'); // Pula para a próxima linha ao final da largura
}

// Função principal que desenha um retângulo de largura x e altura y
void	rush(int x, int y)
{
	int	i; // Variável para controlar as linhas

	i = 0; // Começa na primeira linha
	if (x <= 0 || y <= 0) // Verifica se largura ou altura são inválidas
		return ; // Sai da função sem desenhar nada

	while (i < y) // Enquanto a posição da linha for menor que a altura
	{
		if (i == 0 || i == y - 1) // Se for a primeira ou a última linha
			linhas(x, 'A', 'B', 'C'); // Desenha usando 'A', 'B', 'C'
		else // Para todas as outras linhas (linhas do meio)
			linhas(x, 'B', ' ', 'B'); // Desenha usando 'B', ' ' (espaço), 'B'
		i++; // Vai para a próxima linha
	}
}

    // A função ft_putchar é responsável por imprimir caracteres individuais.
    // A função linhas desenha uma linha específica, decidindo o caractere de início, meio e fim com base na posição.
    // A função rush organiza as linhas para formar o retângulo completo, garantindo que as bordas sejam diferentes das linhas do meio.
    // O fluxo geral do programa valida os tamanhos (x e y) e monta o desenho linha por linha.

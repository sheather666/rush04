/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nborroq <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/13 18:09:31 by nborroq           #+#    #+#             */
/*   Updated: 2020/09/13 18:52:01 by nborroq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_matr(int line, int col, int max_l, int max_col)
{
	if (line == 0)
	{
		if (col == 0)
			ft_putchar('A');
		else if (col == max_col)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (line == max_l)
	{
		if (col == 0)
			ft_putchar('C');
		else if (col == max_col)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (col == 0 || col == max_col)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 0;
	while (line < y)
	{
		col = 0;
		while (col < x)
		{
			print_matr(line, col, y - 1, x - 1);
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}

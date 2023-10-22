/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szahid <szahid@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:06:21 by szahid            #+#    #+#             */
/*   Updated: 2023/10/22 16:09:37 by szahid           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	r;
	int	co;

	r = 1;
	while (r <= y && x > 0)
	{
		co = 1;
		while (co <= x)
		{
			if ((co == 1 && r == 1) || (co == x && r == y && co != 1 && r != 1))
				ft_putchar('A');
			else if ((co == x && r == 1) || (co == 1 && r == y))
				ft_putchar('C');
			else if ((co == 1) || (co == x) || (r == 1) || (r == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			co++;
		}
		ft_putchar('\n');
		r++;
	}
}

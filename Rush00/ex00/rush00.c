/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlyu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 09:31:38 by jlyu              #+#    #+#             */
/*   Updated: 2023/05/22 09:38:02 by jlyu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(int a, char b, char c);

void	rush(int a, int b)
{
	ft_putchar(a, 'o', '-');
	b -= 1;
	while (b > 0)
	{
		if (b == 1)
		{
			ft_putchar(a, 'o', '-');
		}
		else
		{
			ft_putchar(a, '|', ' ');
		}
		b--;
	}
}

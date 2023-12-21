/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 18:08:02 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/20 13:16:33 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_d(int nb, int *count)
{
	int		i;
	char	buffer[12];

	i = 0;
	if (nb == -2147483648)
	{
		ft_print_c('-', count);
		ft_print_c('2', count);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_print_c('-', count);
		nb = -nb;
	}
	while (nb > 0)
	{
		buffer[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
		ft_print_c(buffer[--i], count);
}

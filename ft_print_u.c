/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:14:52 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/20 14:00:46 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_u(unsigned int nb, int *len)
{
	int		i;
	char	buffer[11];

	i = 0;
	if (nb == 0)
	{
		ft_print_c('0', len);
		return ;
	}
	while (nb > 0)
	{
		buffer[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i > 0)
	{
		ft_print_c(buffer[--i], len);
	}
}

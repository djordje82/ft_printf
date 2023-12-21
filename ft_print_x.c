/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:02:47 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/20 15:45:35 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	convert_to_hex(unsigned int hx, char *buffer, char *hx_size, int *i)
{
	while (hx > 0)
	{
		buffer[*i] = hx_size[hx % 16];
		hx /= 16;
		(*i)++;
	}
}

static char	*get_hex_base(unsigned int hx)
{
	static char	lower_hex[] = "0123456789abcdef";
	static char	upper_hex[] = "0123456789ABCDEF";

	if (hx == 'x')
	{
		return (lower_hex);
	}
	return (upper_hex);
}

void	ft_print_x(unsigned int hx, int *count)
{
	char	*hx_size;
	int		i;
	char	buffer[16];

	hx_size = get_hex_base(hx);
	i = 0;
	if (hx == 0)
	{
		write(1, &hx_size[0], 1);
		(*count)++;
	}
	convert_to_hex(hx, buffer, hx_size, &i);
	while (i > 0)
	{
		i--;
		write(1, &buffer[i], 1);
		(*count)++;
	}
}

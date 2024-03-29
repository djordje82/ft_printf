/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:02:47 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/22 12:34:45 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned long long hx, char input, int *count)
{
	char	*hx_b;
	int		i;

	if (input == 'x')
		hx_b = "0123456789abcdef";
	else
		hx_b = "0123456789ABCDEF";
	if (hx >= 16)
	{
		ft_print_x(hx / 16, input, count);
	}
	i = hx % 16;
	write(1, &hx_b[i], 1);
	(*count)++;
	return (*count);
}

/*
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

void	ft_print_x(unsigned int hx, char input, int *count)
{
	char	*hx_size;
	int		i;
	char	buffer[16];

	hx_size = get_hex_base(input);
	i = 0;
	if (hx == 0)
	{
		if (write(1, &hx_size[0], 1) == -1)
			return ;
		(*count)++;
	}
	else
	{
		convert_to_hex(hx, buffer, hx_size, &i);
		while (i > 0)
		{
			--i;
			if (write(1, &buffer[i], 1) == -1)
				return ;
			(*count)++;
		}
	}
}
*/
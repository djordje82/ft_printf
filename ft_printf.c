/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:35:20 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/22 11:14:54 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_conversion(const char input, va_list args, int *count)
{
	if (input == 'c')
		ft_print_c(va_arg(args, int), count);
	else if (input == 's')
		ft_print_s(va_arg(args, char *), count);
	else if (input == 'p')
		ft_print_p(va_arg(args, void *), count);
	else if (input == 'd' || input == 'i')
		ft_print_d(va_arg(args, int), count);
	else if (input == 'u')
		ft_print_u(va_arg(args, unsigned int), count);
	else if (input == 'x' || input == 'X')
		ft_print_x(va_arg(args, unsigned int), input, count);
	else if (input == '%')
		ft_print_c('%', count);
}

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		i;
	int		count;

	va_start(args, input);
	i = 0;
	count = 0;
	if (!input[i])
		return (0);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			check_conversion(input[i], args, &count);
		}
		else
		{
			ft_print_c(input[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}

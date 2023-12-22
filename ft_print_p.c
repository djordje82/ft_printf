/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:36:09 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/22 12:28:36 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(void *ptr, int *count)
{
	unsigned long long	ptr_address;

	if (!ptr)
	{
		return (ft_print_s("(nil)", count));
	}
	ptr_address = (unsigned long long)ptr;
	ft_print_s("0x", count);
	return (ft_print_x(ptr_address, 'x', count));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:36:09 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/20 15:47:33 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_p(void *ptr, int *count)
{
	unsigned long long	ptr_address;

	ptr_address = (unsigned long long)ptr;
	if (!ptr)
	{
		ft_print_s("(nil)", count);
		return ;
	}
	else
	{
		ft_print_s("0x", count);
		ft_print_x(ptr_address, count);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:25:23 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/20 13:59:54 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		str = "(NULL)";
		return ;
	}
	while (str[i])
		ft_print_c(str[i++], count);
}

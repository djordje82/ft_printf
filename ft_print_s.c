/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:25:23 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/21 22:55:03 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_s(char *str, int *count)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_print_s("(null)", count);
		return ;
	}
	while (str[i])
		ft_print_c(str[i], count);
		i++;
}

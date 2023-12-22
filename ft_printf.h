/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodordev <dodordev@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:30:05 by dodordev          #+#    #+#             */
/*   Updated: 2023/12/22 11:38:35 by dodordev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
void	ft_print_c(char c, int *count);
void	ft_print_s(char *str, int *count);
void	ft_print_p(void *ptr, int *count);
void	ft_print_d(int nb, int *count);
void	ft_print_u(unsigned int nb, int *count);
void	ft_print_x(unsigned int hx, char input, int *count);

#endif
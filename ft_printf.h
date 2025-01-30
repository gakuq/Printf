/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmaterna <mmaterna@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 22:08:21 by mmaterna          #+#    #+#             */
/*   Updated: 2025/01/18 05:57:14 by mmaterna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "Libft/libft.h"

char	*ft_convert_hex(unsigned long num, char spec);
int 	ft_printptr(va_list args, int i);
int		ft_printf(const char *format, ...);

#endif
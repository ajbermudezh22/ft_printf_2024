/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:50:22 by albbermu          #+#    #+#             */
/*   Updated: 2024/05/16 21:07:35 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# include "libft/libft.h"

int			ft_printf(const char *format, ...);
int			format_logic(const char *format, va_list args);
size_t		check_format(const char **format, va_list args);
size_t		ft_print_char(int c);
size_t		ft_print_string(char *s);
size_t		ft_print_pointer(void *p);
size_t		ft_print_decimal(int d);
size_t		ft_print_unsigned(unsigned int u);
size_t		ft_print_hex(unsigned int x, int uppercase);
size_t		ft_print_percent(void);

#endif
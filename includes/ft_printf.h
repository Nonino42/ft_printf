/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hanmpark <hanmpark@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:52:52 by hanmpark          #+#    #+#             */
/*   Updated: 2022/12/23 17:33:48 by hanmpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_toprint
{
	va_list	args;
	int		len;
}	t_toprint;

int	ft_printf(const char *input, ...);
// TYPE_STDOUT
void	ft_printchar(t_toprint *tab, int is_char);
void	ft_putnbrbase(t_toprint *tab, char *base, long long i);
void	ft_putnbrbase_p(t_toprint *tab, char *base, unsigned long long i);

#endif
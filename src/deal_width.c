/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deal_width.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 09:31:24 by ititkov           #+#    #+#             */
/*   Updated: 2019/03/14 14:44:33 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_star_width(int *star_width, va_list *arg, t_flags *flags)
{
	int		width;

	*star_width = 1;
	width = va_arg(*arg, int);
	if (width < 0)
	{
		width = -width;
		flags->right_padding = 1;
	}
	flags->width = width;
}

char		*deal_width(char **format, t_flags *flags, va_list *arg)
{
	int		star_width;

	star_width = 0;
	while (**format == '*' || ft_isdigit(**format))
	{
		if ((star_width == 1 && ft_isdigit(**format)) || \
			(star_width != 0 && **format == '*'))
			return (NULL);
		if (**format == '*')
			ft_star_width(&star_width, arg, flags);
		if (ft_isdigit(**format))
		{
			star_width = -1;
			flags->width = flags->width * 10 + **format - 48;
		}
		(*format)++;
	}
	return (*format);
}

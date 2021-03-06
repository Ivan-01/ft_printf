/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 20:56:35 by ititkov           #+#    #+#             */
/*   Updated: 2018/12/21 10:32:21 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функция берёт указатель на указатель освобождает зерезервированную под указа-
** тель память и присваивает нижнему указателю значение NULL
*/

void	ft_memdel(void **ar)
{
	free(*ar);
	*ar = NULL;
}

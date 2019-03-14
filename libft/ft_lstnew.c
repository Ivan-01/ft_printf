/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ititkov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/17 11:13:15 by ititkov           #+#    #+#             */
/*   Updated: 2018/12/21 10:30:22 by ititkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Функцкция возвращает указатель на новую структуру t_list
**
** Проверяем выделение адреса, если адрес взять не удалось, возвращаем NULL
** Если значение аргумента content NULL, то элемент content_size инициируется
** значением 0 независимо от реального значения аргумента content_size
**
** Если content не равен NULL, то алоцируется память в размере content_size.
** Если лоцировать память не удалось, возвращаем NULL
** Используем функцию ft_memove для переноса содержания content из аргумента в
** new->content. Переносим аргумент content_size в new->content_size
** Создаём ссылку на конечный элемент списка со значением NULL
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	new = (t_list *)malloc(sizeof(t_list) * 1);
	if (new == NULL)
		return (NULL);
	if (content == NULL)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = malloc(content_size);
		if (new->content == NULL)
			return (NULL);
		ft_memmove(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}

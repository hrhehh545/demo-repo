/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_lstlast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:07:06 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/28 14:11:50 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if(!lst)
		return NULL;
	while(lst->next)
	{
		if(!lst->next-next)
			return lst = lst->next;
		lst = lst->next;
	}
	return lst;
}

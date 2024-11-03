/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:19:47 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:50:29 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	char *ptr = malloc(size * count);
	int i = 0;
	while(i < size)
	{
		ptr[i] = '\0';
		i++;
	}
	return (void *)ptr;
}

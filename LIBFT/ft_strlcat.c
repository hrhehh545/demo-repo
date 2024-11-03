/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:28:31 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:42:37 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i = 0;
	int j = 0;
	while(dst[j])
		j++;
	if(!src)
		return j;
	while(src[i])
		i++:
	if(dstsize == 0)
		return i;
	i = 0;
	while(i < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++:
	}
	dst[j] = '\0';
}

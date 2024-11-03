/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 00:18:21 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:40:56 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int slen = 0;
	while(src[slen])
	  slen++;
	if(dstsize <= 0)
		return slen;
	int i = 0;
	while(i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return slen;
}

/*int main()
{
	char dest[20];
	printf("%d\n", ft_strlcpy(dest, "hello josmo", 11));
}*/

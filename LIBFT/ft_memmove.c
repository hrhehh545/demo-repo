/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:33:01 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:39:44 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	char *dest = dst;
	const char *sorc = src;
	const char *s = src;
	const void *send;
	while(*s)
	{
		s++;
	}
	send = src;
	if(dst <= send && dst >= src)
		return 0;
	int i = 0;
	while(i < len)
	{
		dest[i] = sorc[i];
		i++;
	}
	return dst;
}

/*int main()
{
	char dst[17];
	printf("%s\n", ft_memmove(dst, "hello josmo", 8));
}*/

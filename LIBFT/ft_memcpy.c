/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:20:22 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:38:58 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *d = dst;
	const char *s = src;
	int i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return dst;
}

/*int main()
{
	char dst[20];
	printf("%s\n", ft_memcpy(dst, "hello josmo", sizeof("hello josmo") + 1));
}*/

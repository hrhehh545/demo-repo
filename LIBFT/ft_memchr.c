/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:27:13 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:47:37 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i = 0;
	char *b = (char *)s;
	while(b[i] && i < n)
	{
		if(b[i] == c)
			return (void *)&b[i];
		i++;
	}
	return (void *)&b[i];
}
/*
int main()
{
	printf("%c\n", *(char *)(ft_memchr("hello josmo", 'm', 11)));
}*/

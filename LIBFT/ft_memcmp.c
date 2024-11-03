/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:38:38 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:48:41 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *ss1 = (char *)s1;
	char *ss2 = (char *)s2;
	int i = 0;
	while(ss1[i] && ss2[i] && i < n)
	{
		if(ss1[i] != ss2[i])
			return ss1[i] - ss2[i];
		i++;
	}
	return ss1[i] - ss2[i];
}
/*
int main()
{
	printf("%d\n", ft_memcmp("hello joslo", "hello josmo", 11));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:20:57 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:46:58 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i = 0;
	while(s1[i] && s2[i] && i < n)
	{
		if(s1[i] != s2[i])
			return s1[i] - s2[i];
		i++;
	}
	return s1[i] - s2[i];
}
/*
int main()
{
	printf("%d\n", ft_strncmp("hello josmo", "hello kawra", 2));
}*/

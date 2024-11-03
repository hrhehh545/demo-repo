/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:47:48 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:49:20 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *find, size_t len)
{
	int i = 0;
	int j = 0;
	while(str[i] && i < len)
	{
		while(find[j] == str[i + j] && str[i + j] && (i + j) < len)
			j++;
		if(!find[j])
			return (char *)&str[i];
		i++;
		j = 0;
	}
	return (char *)'\0';
}
/*
int main()
{
	printf("%s\n", ft_strnstr("hello jsmo 777", "josmo", 11));
}*/

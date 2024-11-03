/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:51:42 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 13:06:11 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
	char *sub = malloc(sizeof(char) * (len + 1));
	if(!sub)
		return NULL;
	int i = 0;
	while(i < len && s[i])
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return sub;
}

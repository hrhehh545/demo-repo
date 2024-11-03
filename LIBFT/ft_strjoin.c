/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:05:18 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 14:11:57 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int len = ft_strlen(s1) + ft_strlen(s2) + 1;
	char *nstr = malloc(sizeof(char) * len);
	if(!nstr)
		return NULL;
	int i = 0;
	int j = 0;
	while(s1[i])
	{
		nstr[j] = s1[i];
		j++:
		i++;
	}
	i = 0;
	while(s2[i])
	{
		nstr[j] = s2[i];
		i++;
		j++;
	}
	nstr[j] = '\0';
	return nstr;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:10:47 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:46:13 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	char *ch;
	while(s[i])
	{
		if(s[i] == c)
		{
			ch = (char *)&s[i];
		}
		i++;
	}
	if(ch)
		return ch;
	ch = (char *)&s[i];
	return ch;
}
/*
int main()
{
	printf("%c\n ", *((ft_strrchr("hello josmol", 'l')-1)));
}*/

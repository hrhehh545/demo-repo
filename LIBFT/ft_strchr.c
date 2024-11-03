/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:01:25 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:44:44 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i = 0;
	char *ch;
	while(s[i])
	{
		if(s[i] == c)
		{
			ch = (char *)&s[i];
			return ch;
		}
		i++;
	}
	ch = (char *)&s[i];
	return ch;
}
/*
int main()
{
	printf("%c\n", *(ft_strchr("hello josmo", 'a')));
}*/

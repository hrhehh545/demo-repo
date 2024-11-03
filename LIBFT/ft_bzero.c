/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:02:11 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:37:47 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if(n == 0)
		return;
	int i = 0;
	char *b = s;
	while(i < n)
	{
		b[i] = 0;
		i++;
	}
}

/*
int main()
{
	char str[] = "hello josmo";
	char *s = str;
	ft_bzero(s, 7);
	printf("%s\n", s);
}*/

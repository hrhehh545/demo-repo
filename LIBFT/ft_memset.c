/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:03:23 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/25 16:49:22 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char d = c;
	char *s = b;
	if(len <= 0)
		return 0;
	int blen = 0;
	while(s[blen])
		blen++;
	if(len > blen)
		return 0;
	int i = 0;
	while(i <= len)
	{
		s[i] = d;
		i++;
	}
	return b;
}


int main()
{
	char str[4];
	ft_memset(str, 57, 1);
	ft_memset(str+1, 5, 1);
	str[2] = 0;
	str[3] = 0;
	int *a = (int *)str;
	printf("%d\n", *a);
}

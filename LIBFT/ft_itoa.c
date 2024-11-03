/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 13:59:58 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/26 14:56:20 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	unsigned int num;
	if(n < 0)
		num = -n;
	else
		num = n;
	int len = 0;
	int temp = num;
	while(temp > 0)
	{
		temp /= 10;
		len++;
	}
	char *str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return NULL;
	int lt = len;
	while(len)
	{
		str[len-1] = num % 10 + '0';
		num /= 10;
		len--;
	}
	str[lt] = '\0';
	return str;
}

int main()
{
	printf("%s\n", ft_itoa(5698));
}

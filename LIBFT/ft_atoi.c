/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:04:49 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:49:47 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int count = 0;
	int i = 0;
	int sign = 1;
	while((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	   i++;
	if(str[i] == '+' || str[i] == '-')
		if(str[i] == '-')
			sign *= -1;
	while(str[i] >= '0' && str[i] <= '9')
	{
		count *= 10; 
		count +=  str[i] - '0';
		i++;
	}
	return count * sign;
}
/*
int main()
{
	printf("%d\n", ft_atoi("325264"));
}*/

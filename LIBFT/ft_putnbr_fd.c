/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:42:45 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/26 16:17:16 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
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
	while(len)
	{
		char c = (num % 10) + '0';
		write(fd, &c, 1);
		num /= 10;
		len--;
	}
}

int main()
{
	ft_putnbr_fd(777, 7);
}

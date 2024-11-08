/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:53:08 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:43:25 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_toupper(int c)
{
	if(c >= 'a' && c <= 'z')
		c = c - 'a' + 'A';
	return c;
}

/*int main()
{
	printf("%c\n", ft_toupper('c'));
}*/

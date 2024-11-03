/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:02:32 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 12:32:24 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main()
{
	printf("%d\n", ft_isdigit('a'));
	printf("%d\n", ft_isdigit('A'));
	printf("%d\n", ft_isdigit('9'));
	printf("%d\n", ft_isdigit(10));
	printf("%d\n", ft_isdigit(97));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:32:58 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/26 14:52:51 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ft_upper(unsigned int a, char b)
{
	if(a == 0)
		if(b >= 'a' && b <= 'z')
			return b = b + 'A' - 'a';
	return b;
}

char *ft_strmapi(char const *s, char (*f)(unsigned	int, char))
{
	int len = 0;
	while(s[len])
		len++;
	char *str = malloc(sizeof(char) * (len + 1));
	if(!str)
		return NULL;
	int i = 0;
	while(i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return str;
}

int main()
{
	printf("%s\n", ft_strmapi("hello", &ft_upper));
}

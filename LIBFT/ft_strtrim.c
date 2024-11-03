/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:13:44 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/24 16:02:14 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	int i = 0;
	int j = 0;
	if(s1 == 0 || set == 0)
		return NULL;
	char *str = ft_strdup(s1);
	i = 0;
	while(set[j])
	{
		j = 0;
		while(set[j] != str[i] && set[j])
			j++;
		while(set[j] == str[i])
			i++;
	}
	char *str1 = &str[i];
	i = 0;
	size_t len = ft_strlen(str1);
	j = 0;
	while(set[j])
	{
		j = 0;
		while(set[j] != str1[len - 1] && set[j])
			j++;
		while(set[j] == str1[len - 1])
			len--;
	}
	char *alstr = malloc(sizeof(char) * len);
	if(alstr == 0)
		return NULL;
	i = 0;
	while(i < len)
	{
		alstr[i] = str1[i];
		i++;
	}
	alstr[i] = '\0';
	return alstr;
}

int main()
{
    printf("%s\n", ft_strtrim("  ... ..///  hello josmo ...  .. ///", " ./"));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomoumen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 08:56:56 by yomoumen          #+#    #+#             */
/*   Updated: 2024/10/25 10:07:17 by yomoumen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_alloc(const char *s, char c, int *index)
{
    int num = *index;
	int len = 0;
	while(s[num] == c)
		(num)++;
	while(s[num] != c && s[num])
	{
		len++;
		(num)++;
	}
	char *ptr = malloc(sizeof(char) * (len + 1));
	if(ptr == 0)
		return NULL;
	int i = 0;
	while(s[*index] == c)
		(*index)++;
	while(s[*index] != c && s[*index])
	{
		ptr[i] = s[*index];
		(*index)++;
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}

void ft_free(char **array)
{
    int i = 0;
    while(array[i])
	{
	    free(array[i]);
	    i++;
	}
    free(array);
}
char **ft_split(char const *s, char c)
{
	int len = 1;
	int i = 0;
	while(s[i])
	{
		while(s[i] != c && s[i])
			i++;
		if(s[i] == c)
			len++;
		while(s[i] == c)
			i++;
	}
	char **array = malloc(sizeof(char *) * (len + 1));
	if(array == 0)
		return NULL;
	i = 0;
	int j = 0;
	while(i < len)
	{
		array[i] = ft_alloc(s, c, &j);
		if(array[i] == 0)
		{
		    ft_free(array);
		    return NULL;
		}
		i++;
	}
	array[i] = NULL;
	return array;
}

int main()
{
    int i = 0;
    char **ptr = ft_split("josmo is the best", ' ');
    while(ptr[i])
    {
        printf("%s\n", ptr[i]);
        i++;
    }
    ft_free(ptr);
    return 0;
}

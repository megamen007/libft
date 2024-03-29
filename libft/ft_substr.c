/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboudrio <mboudrio@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:56:16 by mboudrio          #+#    #+#             */
/*   Updated: 2022/10/31 17:18:51 by mboudrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		str = (char *) ft_calloc(1, sizeof(char));
		return (str);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	s = s + start;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (*s && i < len)
	{
		str[i] = *s++;
		i++;
	}
	str[len] = '\0';
	return (str);
}

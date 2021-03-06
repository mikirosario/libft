/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miki <miki@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 21:23:14 by mrosario          #+#    #+#             */
/*   Updated: 2021/03/25 18:54:12 by miki             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		strlen;
	size_t		start;
	size_t		end;
	size_t		i;
	char		*ptr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	i = 0;
	if (!(*s1))
		return (ptr = ft_calloc(1, 1));
	strlen = ft_strlen(s1);
	end = strlen - 1;
	while (ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (ft_strchr(set, s1[end]) && start < end)
		end--;
	ptr = ft_calloc(((strlen + 1) - (start + (strlen - end - 1))), 1);
	if (!ptr)
		return (ptr);
	if (start <= end)
		while (start <= end)
			ptr[i++] = s1[start++];
	return (ptr);
}

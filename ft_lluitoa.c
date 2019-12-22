/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lluitoa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/22 07:12:24 by mrosario          #+#    #+#             */
/*   Updated: 2019/12/22 07:25:45 by mrosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_intchar(char *c, size_t endpos, long long unsigned int n)
{
	while (endpos > 0 && n > 0)
	{
		c[--endpos] = (n % 10) + 48;
		n = n / 10;
	}
	return (c);
}

char		*ft_lluitoa(long long unsigned int n)
{
	size_t						byte;
	long long unsigned int		ncpy;
	char						*ptr;

	if (n == 0)
	{
		if (!(ptr = ft_calloc(2, sizeof(char))))
			return (ptr);
		*ptr = '0';
		return (ptr);
	}
	byte = 1;
	ncpy = n;
	while ((ncpy = ncpy / 10) > 0)
		byte++;
	byte++;
	if (!(ptr = ft_calloc((byte), sizeof(char))))
		return (ptr);
	return (ft_intchar(ptr, byte - 1, ncpy));
}

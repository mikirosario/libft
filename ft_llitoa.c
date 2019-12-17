/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa.c                                          :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 18:44:01 by mrosario          #+#    #+#             */
/*   Updated: 2019/12/17 21:49:38 by mrosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_intchar(char *c, size_t endpos, long long int n)
{
	while (endpos > 0 && n > 0)
	{
		c[--endpos] = (n % 10) + 48;
		n = n / 10;
	}
	return (c);
}

char		*ft_llitoa(long long int n)
{
	size_t				byte;
	long long int		ncpy;
	char				*ptr;

	if (n == 0)
		return ("0");
	else if (n == -0)
		return ("-0");
	byte = 1;
	ncpy = n < 0 ? n * -1 : n;
	while ((ncpy = ncpy / 10) > 0)
		byte++;
	ncpy = n < 0 ? n * -1 : n;
	byte = n < 0 ? byte + 2 : byte + 1;
	if (n > 0)
		if (!(ptr = ft_calloc((byte), sizeof(char))))
			return (ptr);
	if (n < 0)
		if (!(ptr = ft_calloc((byte), sizeof(char))))
			return (ptr);
	*ptr = n < 0 ? '-' : 0;
	return (ft_intchar(ptr, byte - 1, ncpy));
}

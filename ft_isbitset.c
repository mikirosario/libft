/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbitset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosario <mrosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:42:08 by mrosario          #+#    #+#             */
/*   Updated: 2021/01/26 20:45:30 by mrosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Simple function to tell you whether a given bit is set in a byte.
** Bit 0 is the rightmost bit. Returns 1 if set, 0 if not set.
*/

//should return unsigned int??
int	ft_isbitset(unsigned int byte, int bit)
{
	unsigned char	mask;

	mask = (unsigned char)1 << bit;
	return (mask & byte);
}
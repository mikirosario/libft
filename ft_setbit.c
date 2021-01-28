/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setbit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosario <mrosario@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 20:40:29 by mrosario          #+#    #+#             */
/*   Updated: 2021/01/26 20:43:49 by mrosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Function to set a bit to 1.
** 0 is the rightmost bit.
*/

unsigned int	ft_setbit(unsigned int byte, int bit)
{
	unsigned char	mask;

	mask = (unsigned char)1 << bit;
	return (mask | byte);
}
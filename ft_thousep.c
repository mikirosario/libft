/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thousep.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrosario <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/20 19:42:54 by mrosario          #+#    #+#             */
/*   Updated: 2019/12/20 23:48:55 by mrosario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_thousep(char *numstr, char sep)
{
	int		strlen;
	int		comcount;
	int		comi;
	int		newlen;
	char	*sepnum;

	comcount = 0;
	comi = 0;
	if (!numstr || (!(ft_isprint(sep))))
		return (NULL);
	strlen = ft_strlen(numstr);
	if (strlen > 3)
		comcount = 1 + ((strlen - 4) / 3);
	newlen = comcount + strlen--;
	if (!(sepnum = ft_calloc(1 + newlen--, sizeof(char))))
		return (NULL);
	while (strlen >= 0 && numstr[strlen] != '-')
	{
		comi == 3 ? (sepnum[newlen--] = sep) : \
					(sepnum[newlen--] = numstr[strlen--]);
		comi == 3 ? comi -= 3 : comi++;
	}
	if (numstr[strlen] == '-')
		sepnum[newlen] = numstr[strlen];
	return (sepnum);
}

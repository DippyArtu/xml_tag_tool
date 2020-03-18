/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsalome <jsalome@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 14:35:50 by jsalome           #+#    #+#             */
/*   Updated: 2020/03/18 18:14:13 by Artur            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoinf(char *str1, char *str2)
{
	char		*str3;
	char		*tmp;
	size_t		str1_c;
	size_t		str2_c;

	str1_c = 0;
	str2_c = 0;
	if (!str1 || !str2)
		return (NULL);
	while (str1[str1_c])
		str1_c += 1;
	while (str2[str2_c])
		str2_c += 1;
	if (!(str3 = (char *)malloc(sizeof(char) * (str1_c + str2_c + 1))))
		return (NULL);
	tmp = str3;
	while (*str1 != '\0')
		*tmp++ = *str1++;
	while (*str2 != '\0')
		*tmp++ = *str2++;
	*tmp = '\0';
	ft_strdel(&str1);
	ft_strdel(&str2);
	return (str3);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:05:56 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/05/21 12:21:53 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		my_strlen(const char *mystr)
{
	int a;
	int x;

	a = 0;
	x = 0;
	while (mystr[x] != '\0')
	{
		x++;
		a++;
	}
	return (a);
}

char	*ft_strdup(const char *str)
{
	int		counta;
	char	*str_ret;

	counta = 0;
	str_ret = (char *)malloc(my_strlen(str) * sizeof(char));
	while (str[counta] != '\0')
	{
		str_ret[counta] = str[counta];
		counta++;
	}
	str_ret[counta] = '\0';
	return (str_ret);
}

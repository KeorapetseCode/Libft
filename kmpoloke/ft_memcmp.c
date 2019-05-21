/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:22:09 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/05/20 12:11:58 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *str1, const void *str2, size_t a)
{
	int ret;
	int counta;
	ret = 0;
	counta = 1;

	char *newStr1 = (char *) str1;
	char *newStr2 = (char *) str2;

	while (counta != a)
	{
		if (newStr1[counta] > newStr2[counta])
		{
			ret += 1;
		}
		else if (newStr1[counta] < newStr2[counta])
		{
			ret -=1;
		}
		else
		{
			return ret;
		}
		counta++;
	}
	return ret;
}

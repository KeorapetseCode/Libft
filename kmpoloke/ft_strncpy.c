/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:53:43 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/05/21 15:33:47 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, size_t str_len)
{
	int counta;

	counta = 0;
	while (str_len > counta)
	{
		dest[counta] = src[counta];
		counta++;
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 14:27:13 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/05/20 14:37:59 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalnum(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	else if (a >= 65 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

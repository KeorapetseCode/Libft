/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmpoloke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:14:38 by kmpoloke          #+#    #+#             */
/*   Updated: 2019/05/20 12:55:31 by kmpoloke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isalpha(int a)
{
	if (a >= 65 && a <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkobeliev <rkobeliev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:35:26 by rkobeliev         #+#    #+#             */
/*   Updated: 2024/03/17 20:23:30 by rkobeliev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	int	i;

	i = 0;
	if (c >= 0 && c <= 127)
	{
		i++;
	}
	if (i == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
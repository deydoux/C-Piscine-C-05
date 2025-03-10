/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:30:33 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/16 18:03:55 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	div;

	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	if (nb > 25)
		div = 6;
	else
		div = 2;
	while (i <= nb / div)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

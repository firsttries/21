/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreynold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 18:50:08 by nreynold          #+#    #+#             */
/*   Updated: 2018/11/21 18:50:08 by nreynold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *num;
	int i;

	i = 0;
	if (min <= max)
	{
		num = (int*)malloc(sizeof(num) * (max - min));
		while (min != max)
		{
			num[i] = min;
			i++;
			min++;
		}
	}
	return (num);
}

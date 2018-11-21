/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreynold <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:13:37 by nreynold          #+#    #+#             */
/*   Updated: 2018/11/21 15:13:37 by nreynold         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str);

int	main(void)
{
	int a, b;
	char *str;
	//printf("%d\n", a);
	a = strcmp("");
	b = ft_strlen("");
	printf("%d, %d\n", a, b);
	return 0;
}
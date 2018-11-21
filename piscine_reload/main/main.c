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
#include <stdlib.h>

int	main(void)
{
	char str[11] = "0123456789";
	char *istr;

	istr = strdup (str);
	printf("Дубликат - %s\n", istr);
	free (istr);
	return 0;
}
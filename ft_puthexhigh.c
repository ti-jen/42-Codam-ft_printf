/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexhigh.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:39:02 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/31 14:44:40 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "libft/libft.h"

void ft_puthexhigh(int n)
{
	char hex[16];
	int temp;
	ft_strlcpy(hex, "0123456789ABCDEF", 20);
	if (n >= 16)
	{
		ft_puthexhigh(n / 16);
	}
	temp = n % 16;
	temp = hex[temp];
	write(1, &temp, 1);
}
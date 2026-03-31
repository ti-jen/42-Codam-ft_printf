/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexlow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:35:26 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/31 14:44:32 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "libft/libft.h"

void ft_puthexlow(int n)
{
	char hex[16];
	int temp;
	ft_strlcpy(hex, "0123456789abcdef", 20);
	if (n >= 16)
	{
		ft_puthexlow(n / 16);
	}
	temp = n % 16;
	temp = hex[temp];
	write(1, &temp, 1);
}
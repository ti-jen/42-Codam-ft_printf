/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadres.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 10:22:35 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/31 12:59:42 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include "libft/libft.h"

static void ft_decthex(unsigned long adr)
{
	char hex[16];
	long temp;
	ft_strlcpy(hex, "0123456789abcdef", 20);
	if (adr >= 16)
	{
		ft_decthex(adr / 16);
	}
	temp = adr % 16;
	temp = hex[temp];
	write(1, &temp, 1);
}


void	ft_putadres(unsigned long adr)
{
	write(1, "0", 1);
	write(1, "x", 1);
	ft_decthex(adr);
}

// int	main(void)
// {
// 	char word[] = "cool long text";
// 	printf("%p\n", word);

// 	ft_putadres((unsigned long)&word);
// 	return (0);
// }
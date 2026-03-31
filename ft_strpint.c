/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkroon <tkroon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 14:10:18 by tkroon            #+#    #+#             */
/*   Updated: 2026/03/30 15:21:53 by tkroon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strprint(const char *str, int count)
{
	while (str[count] != '\0' && str[count] != '%')
	{
		write(1, &str[count], 1);
		count++;
	}
	return (count);
}
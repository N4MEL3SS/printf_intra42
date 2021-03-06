/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celadia <celadia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:00:49 by celadia           #+#    #+#             */
/*   Updated: 2021/11/16 18:00:49 by celadia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Функция ft_putnchar выполняет вывод в консоль.
 */

#include "../includes/ft_printf.h"

void	ft_putnchar(char *str, size_t i)
{
	if (i > 0)
		write(1, str, i);
}

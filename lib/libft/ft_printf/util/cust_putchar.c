/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cust_putchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <hiyamamo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 11:22:20 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/23 12:19:40 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	cust_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}
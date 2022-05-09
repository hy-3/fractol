/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiyamamo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 17:36:04 by hiyamamo          #+#    #+#             */
/*   Updated: 2022/04/13 17:36:06 by hiyamamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Check if given char[i] is ASCII character.
 * 
 * @param i(int): Character which will be checked.
 * @return (int): If it is true, return 1. If not, return 0.
 */
int	ft_isascii(int i)
{
	if (0 <= i && i <= 127)
		return (1);
	else
		return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkoch <gkoch@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 03:01:29 by gkoch             #+#    #+#             */
/*   Updated: 2018/11/20 03:01:32 by gkoch            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if (((int)c >= 'a' && (int)c <= 'z') ||
		((int)c >= 'A' && (int)c <= 'Z'))
		return (1);
	else
		return (0);
}

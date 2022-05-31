/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomUtils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytouate <ytouate@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 12:56:09 by ytouate           #+#    #+#             */
/*   Updated: 2022/05/31 12:59:11 by ytouate          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec.h"

int	ft_strcmp(char *s, char *str)
{
	int	i;

	i = 0;
	while (s[i] || str[i])
	{
		if (s[i] != str[i])
			return (s[i] - str[i]);
		i++;
	}
	return (0);
}

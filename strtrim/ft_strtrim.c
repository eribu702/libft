/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <aroberts@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 17:42:08 by aroberts          #+#    #+#             */
/*   Updated: 2022/05/07 22:36:33 by aroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int		isspace(char	arg, int	i)
{
	if (arg[i] > 8 && arg[i] < 14)
	{
		return (1);
	}
	else if (arg[i] == 32)
	{
		return (1);
	}
	else
		return (0);
}

char	trim2(char	s1, 
char 	ft_strtrim(char const *s1, char const *set);
{
	int		i;
	int		start;
	int		end;
	
	i = 0;
	num = 0;
	end = 0;
	while (isspace(s1, i) == 1)
	{
		start++;
		i++;
	}
	while (isspace(s1, i) == 0)
		i++;
	while (isspace(s2, i) == 1)
	{
		start++;
		i++;
	}
}

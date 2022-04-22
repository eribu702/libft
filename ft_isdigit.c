/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroberts <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 14:17:03 by aroberts          #+#    #+#             */
/*   Updated: 2022/03/17 16:29:09 by aroberts         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include	<stdio.h>
int main(void)
{
	int a;
	int b;

	a = '1';
	b = 'w';
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
}
*/

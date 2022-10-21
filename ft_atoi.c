/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atio.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyasar <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:28:12 by yyasar            #+#    #+#             */
/*   Updated: 2022/09/07 17:09:32 by yyasar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	a;
	int	snc;

	i = 0;
	a = 1;
	snc = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			a *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		snc = (str[i] - '0') + (snc * 10);
		i++;
	}
	return (snc * a);
}
/*
int main(void)
{
	char *s  = " 	---+--+1234ab567";
	printf("%d", ft_atoi(s));
}*/

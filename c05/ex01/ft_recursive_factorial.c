/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selaslan <selaslan@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 08:37:55 by selaslan          #+#    #+#             */
/*   Updated: 2023/02/16 08:38:23 by selaslan         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}

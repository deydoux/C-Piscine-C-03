/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:10:37 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/09 18:00:19 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	end;

	i = 0;
	end = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (dest);
}

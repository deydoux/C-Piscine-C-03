/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:10:37 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/11 20:51:26 by deydoux          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	end;

	end = ft_strlen(dest);
	if (size <= end)
		return (ft_strlen(src) + size);
	i = 0;
	while (i + end < size - 1 && src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (end + ft_strlen(src));
}

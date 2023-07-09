/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 15:10:37 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/09 17:10:23 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	end;

	i = 0;
	end = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (dest);
}

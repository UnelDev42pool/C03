/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 10:14:39 by edechena          #+#    #+#             */
/*   Updated: 2023/07/08 19:46:01 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	const int		destlen = ft_strlen(dest);

	i = 0;
	while (src[i] != '\0')
	{
		if (i == size)
		{
			dest[destlen + i] = '\0';
		}
		else if (i < size)
		{
			dest[destlen + i] = src[i];
		}
		i++;
	}
	return (destlen + i);
}

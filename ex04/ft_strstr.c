/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edechena <edechena@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:45:55 by edechena          #+#    #+#             */
/*   Updated: 2023/07/08 10:13:10 by edechena         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	char	*position;

	i = 0;
	j = 0;
	position = NULL;
	while (str[i] != '\0' && to_find[i] != '\0')
	{
		while (str[i] != to_find[j])
			i++;
		position = str + i;
		while (str[i] == to_find[j])
		{
			if (str[i + 1] == '\0' && to_find[j + 1] == '\0')
				return (position);
			if (str[i + 1] == '\0')
				return (NULL);
			if (to_find[j + 1] == '\0')
				return (position);
			i++;
			j++;
		}
	}
	return (position);
}

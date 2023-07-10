/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 09:45:55 by edechena          #+#    #+#             */
/*   Updated: 2023/07/10 22:16:44 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int		g_i;
int		g_j;

char	*ft_strstr(char *str, char *to_find)
{
	char	*position;

	g_i = 0;
	g_j = 0;
	position = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[g_i] != '\0' && to_find[g_i] != '\0')
	{
		while (str[g_i] != to_find[g_j])
			g_i++;
		position = str + g_i;
		while (str[g_i] == to_find[g_j])
		{
			if (str[g_i + 1] == '\0' && to_find[g_j + 1] == '\0')
				return (position);
			if (str[g_i + 1] == '\0')
				return (0);
			if (to_find[g_j + 1] == '\0')
				return (position);
			g_i++;
			g_j++;
		}
	}
	return (position);
}

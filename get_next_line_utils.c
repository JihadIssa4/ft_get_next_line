/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jissa <jissa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 17:53:18 by jissa             #+#    #+#             */
/*   Updated: 2025/06/10 15:37:08 by jissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*new_str;

	i = 0;
	len = ft_strlen(s);
	new_str = (char *)malloc((len + 1) * sizeof(char));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = s[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	i;
	size_t	j;
	char	*newstr_ptr;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	newstr_ptr = (char *)malloc((s1_len + s2_len + 1) * sizeof(char));
	if (!newstr_ptr)
		return (NULL);
	i = 0;
	while (i < s1_len)
	{
		newstr_ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < s2_len)
	{
		newstr_ptr[i + j] = s2[j];
		j++;
	}
	newstr_ptr[i + j] = '\0';
	return (newstr_ptr);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	size_t	sub_len;
	char	*sub_str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	sub_str = (char *)malloc((sub_len + 1) * sizeof(char));
	if (!sub_str)
		return (NULL);
	i = 0;
	while (s[start + i] && i < sub_len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}

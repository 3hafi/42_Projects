/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hafhamid <hafhamid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:55:01 by hafhamid          #+#    #+#             */
/*   Updated: 2025/11/06 16:33:38 by hafhamid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_segments(char const *str, char sep)
{
	int	idx;
	int	count;

	count = 0;
	if (sep == 0)
		return (1);
	if (!str)
		return (0);
	idx = 0;
	while (str[idx] == sep && str[idx] != '\0')
		idx++;
	while (str[idx] != 0)
	{
		if (str[idx] != sep)
		{
			count++;
			while (str[idx] != sep && str[idx] != 0)
				idx++;
		}
		while (str[idx] == sep && str[idx] != '\0')
			idx++;
	}
	return (count);
}

static int	get_segment_len(char const *str, char sep, int pos)
{
	int	len;

	len = 0;
	while (str[pos + len] != 0 && str[pos + len] != sep)
		len++;
	return (len);
}

int	fill_segment(char *new_word, char const *str, char sep, int pos)
{
	int	j_idx;

	j_idx = 0;
	while (str[pos] != sep && str[pos] != 0)
		new_word[j_idx++] = str[pos++];
	new_word[j_idx] = '\0';
	return (pos);
}

int	cleanup_on_fail(char **arr, int segment_idx)
{
	if (!arr[segment_idx])
	{
		while (segment_idx > 0)
			free(arr[--segment_idx]);
		free(arr);
		return (1);
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**result_array;
	int		s_idx;
	int		segment_idx;

	segment_idx = 0;
	result_array = malloc(sizeof(char *) * (count_segments(s, c) + 1));
	if (!result_array)
		return (NULL);
	s_idx = 0;
	while (s[s_idx] == c && s[s_idx] != '\0')
		s_idx++;
	while (s[s_idx] != 0)
	{
		if (s[s_idx] != c)
		{
			result_array[segment_idx] = malloc(sizeof(char) * (get_segment_len(s, c, s_idx) + 1));
			if (cleanup_on_fail(result_array, segment_idx) == 1)
				return (NULL);
			s_idx = fill_segment(result_array[segment_idx++], s, c, s_idx);
		}
		while (s[s_idx] == c && s[s_idx] != '\0')
			s_idx++;
	}
	result_array[segment_idx] = NULL;
	return (result_array);
}

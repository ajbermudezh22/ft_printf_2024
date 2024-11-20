/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albbermu <albbermu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 16:02:30 by albbermu          #+#    #+#             */
/*   Updated: 2024/05/03 14:11:26 by albbermu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;
	size_t	sub_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	sub_len = s_len - start;
	if (sub_len > len)
		sub_len = len;
	sub = (char *)malloc(sub_len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, sub_len + 1);
	return (sub);
}
/*
char *ft_substr(char const *s, unsigned int start, size_t len);

int main() {
    const char *str = "Hello, World!";
    unsigned int start = 7;
    size_t len = 5;

    char *substring = ft_substr(str, start, len);
    if (substring) {
        printf("Substring: '%s'\n", substring);
        free(substring);
    } else {
        printf("Failed to allocate memory for substring.\n");
    }

    return 0;
}
*/

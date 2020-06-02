/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 10:32:53 by ykalashn          #+#    #+#             */
/*   Updated: 2020/06/02 10:32:57 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		set_line(char **s, char **line, int fd)
{
	char		*tmp;
	int			i;

	i = 0;
	while (s[fd][i] != '\n' && s[fd][i] != '\0')
		i++;
	if (s[fd][i] == '\n')
	{
		if (!(*line = ft_strsub(s[fd], 0, i)))
			return (-1);
		if (!(tmp = ft_strdup(s[fd] + (i + 1))))
			return (-1);
		free(s[fd]);
		s[fd] = tmp;
	}
	else if (s[fd][i] == '\0')
	{
		if (!(*line = ft_strdup(s[fd])))
			return (-1);
		ft_strdel(&s[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	static char	*s[MAX_FD];
	char		buf[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (fd < 0 || line == NULL || read(fd, buf, 0) < 0)
		return (-1);
	while ((ret = (read(fd, buf, BUFF_SIZE))) > 0)
	{
		buf[ret] = '\0';
		if (s[fd] == NULL)
			s[fd] = ft_strdup(buf);
		else
		{
			tmp = s[fd];
			if (!(s[fd] = ft_strjoin(s[fd], buf)))
				return (-1);
			ft_strdel(&tmp);
		}
		if (ft_strchr(s[fd], '\n'))
			break ;
	}
	return (ret == 0 && (s[fd] == NULL || s[fd][0] == '\0')
	? 0 : set_line(s, line, fd));
}

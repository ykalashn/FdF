/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 12:41:54 by ykalashn          #+#    #+#             */
/*   Updated: 2020/07/06 14:01:41 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int ft_file_to_int(int argc, char **argv)
{
	int fd;
	int i;
	int **array;
	int *amt_of_lines;
	char *line;
	
	i = 0;
	amt_of_lines = 0;
	if (argc <= 1)
		fd = 0;
	else
		fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &line))
	{
		line++;
		i++;
	}
	while (get_next_line(fd, &line) > 0)
	{
		//array = ft_atoi(line);
		//line++;
		//array++;
		line = line + i;
		amt_of_lines++;
	}
	free(line);
	return (array);
}


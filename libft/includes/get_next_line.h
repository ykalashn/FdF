/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 10:33:17 by ykalashn          #+#    #+#             */
/*   Updated: 2020/07/06 12:51:42 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define CEILING 4864
# define BUFF_SIZE 3

# include "libft.h"

int	get_next_line(const int fd, char **line);

#endif

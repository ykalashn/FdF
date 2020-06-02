/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykalashn <ykalashn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 16:15:27 by ykalashn          #+#    #+#             */
/*   Updated: 2020/03/22 21:06:24 by ykalashn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void    ft_draw_line(int line[4], void **params, unsigned c)
{
    float    x_increment;
    float    y_increment;
    float    xy[2];
    int        steps;
    int        i;

    i = 0;
    xy[0] = line[0];
    xy[1] = line[1];
    steps = ft_abs(line[2] - line[0]) > ft_abs(line[3] - line[1]) ?
            ft_abs(line[2] - line[0]) : ft_abs(line[3] - line[1]);
    if (!steps)
        return ;
    x_increment = (line[2] - line[0]) / (float)steps;
    y_increment = (line[3] - line[1]) / (float)steps;
    while (i <= (steps))
    {
        mlx_pixel_put(params[0], params[1], xy[0], xy[1], c);
        xy[0] += x_increment;
        xy[1] += y_increment;
        i++;
    }
}
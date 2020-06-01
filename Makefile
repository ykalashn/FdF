# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykalashn <ykalashn@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/01 11:52:04 by ykalashn          #+#    #+#              #
#    Updated: 2020/06/01 11:52:17 by ykalashn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCS = srcs/ft_draw_line.c 


FLAGS = -Wall -Werror -Wextra -I/.includes

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		make -C libft
		gcc -o $(NAME) $(FLAGS) $(OBJ) -lmlx -framework OpenGL -framework AppKit libft/libft.a
		echo "FdF done"

clean:
		make clean -C libft
		rm -f $(OBJ)

fclean: clean
		make fclean -C libft
		rm -f $(NAME)

re: fclean all
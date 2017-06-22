# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/18 17:55:35 by dcastro-          #+#    #+#              #
#    Updated: 2017/05/02 18:53:46 by dcastro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf

CMP  = gcc

SRCS = srcs/main.c srcs/ft_printf.c helpers/arg_check.c\
		srcs/start_printf.c handlers/handle_str.c handlers/handle_int.c\
		handlers/handle_more_int.c helpers/ft_uitoa_base.c helpers/ft_itoa_base.c\

INCL = -I includes/ -L libft/ -lft

OBJ = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) :
	@make all -C libft
	@$(CMP) $(INCL) $(SRCS) -o $(NAME)

clean : 
	@make clean -C libft
	@/bin/rm -f $(OBJ)

fclean : clean
	@make fclean -C libft
	@/bin/rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean

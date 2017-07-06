# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/18 17:55:35 by dcastro-          #+#    #+#              #
#    Updated: 2017/07/05 18:03:08 by dcastro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CMP  = gcc -Wall -Werror -Wextra -c

SRCS =  srcs/ft_printf.c helpers/arg_check.c\
		srcs/start_printf.c handlers/handle_str.c handlers/handle_int.c\
		handlers/handle_more_int.c helpers/ft_uitoa_base.c helpers/ft_itoa_base.c\
		helpers/format_out.c\
		srcs/libft/ft_atoi.c srcs/libft/ft_bzero.c srcs/libft/ft_isalnum.c\
		srcs/libft/ft_isalpha.c srcs/libft/ft_isascii.c srcs/libft/ft_isdigit.c\
	   	srcs/libft/ft_isprint.c srcs/libft/ft_memalloc.c srcs/libft/ft_memccpy.c\
	   	srcs/libft/ft_memchr.c srcs/libft/ft_memcmp.c srcs/libft/ft_memcpy.c\
	   	srcs/libft/ft_memdel.c srcs/libft/ft_memmove.c srcs/libft/ft_memset.c\
	   	srcs/libft/ft_putchar.c srcs/libft/ft_putchar_fd.c srcs/libft/ft_putendl.c\
	   	srcs/libft/ft_putendl_fd.c srcs/libft/ft_putnbr.c srcs/libft/ft_putnbr_fd.c\
	   	srcs/libft/ft_putstr.c srcs/libft/ft_putstr_fd.c srcs/libft/ft_strcat.c\
	   	srcs/libft/ft_strchr.c srcs/libft/ft_strclr.c srcs/libft/ft_strcmp.c\
	   	srcs/libft/ft_strcpy.c srcs/libft/ft_strdel.c srcs/libft/ft_strdup.c\
		srcs/libft/ft_strequ.c srcs/libft/ft_striter.c srcs/libft/ft_striteri.c\
	   	srcs/libft/ft_strjoin.c srcs/libft/ft_strlcat.c srcs/libft/ft_strlen.c\
	   	srcs/libft/ft_strmap.c srcs/libft/ft_strmapi.c srcs/libft/ft_strncat.c\
	   	srcs/libft/ft_strncmp.c srcs/libft/ft_strncpy.c srcs/libft/ft_strnequ.c\
		srcs/libft/ft_strnew.c srcs/libft/ft_strnstr.c srcs/libft/ft_strstr.c\
	   	srcs/libft/ft_strsub.c srcs/libft/ft_strtrim.c srcs/libft/ft_tolower.c\
	   	srcs/libft/ft_toupper.c srcs/libft/ft_strrchr.c srcs/libft/ft_strsplit.c\
	   	srcs/libft/ft_itoa.c srcs/libft/ft_spacecheck.c srcs/libft/ft_wdcount.c\
	   	srcs/libft/ft_lstnew.c srcs/libft/ft_lstdelone.c srcs/libft/ft_lstdel.c\
	   	srcs/libft/ft_lstadd.c srcs/libft/ft_lstiter.c srcs/libft/ft_lstmap.c\
	   	srcs/libft/ft_wdlen.c srcs/libft/ft_range.c srcs/libft/ft_list_size.c

INCL = -I includes/ft_printf.h

OBJ = $(SRCS:.c=.o)
ODIR = objs/
OBJS = $(addprefix $(ODIR), $(OBJ))

all : $(NAME)

$(ODIR)%.o: %.c
	@/bin/mkdir -p $(ODIR)
	@echo "done making object dir"
	@$(CMP) $(INCL) $< -o $@

$(NAME) : $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean : 
	@/bin/rm -rf $(ODIR)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean

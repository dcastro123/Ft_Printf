# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcastro- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/18 17:55:35 by dcastro-          #+#    #+#              #
#    Updated: 2017/07/05 21:52:43 by dcastro-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CMP  = gcc -Wall -Werror -Wextra -c

SRC =  		srcs/ft_printf.c srcs/start_printf.c 
HANDLER = 	handlers/handle_str.c handlers/handle_int.c handlers/handle_more_int.c\
			handlers/handle_int_etc.c
HELPER = 	helpers/arg_check.c helpers/ft_uitoa_base.c helpers/ft_itoa_base.c helpers/format_out.c\
			helpers/format_int.c helpers/ft_ultoa_base.c helpers/ft_uitoa.c helpers/ft_uitoa_capbase.c\
			helpers/ft_ltoa.c
LIBFT =	libft/ft_atoi.c libft/ft_bzero.c libft/ft_isalnum.c\
		libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c\
	   	libft/ft_isprint.c libft/ft_memalloc.c libft/ft_memccpy.c\
	   	libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c\
	   	libft/ft_memdel.c libft/ft_memmove.c libft/ft_memset.c\
	   	libft/ft_putchar.c libft/ft_putchar_fd.c libft/ft_putendl.c\
	   	libft/ft_putendl_fd.c libft/ft_putnbr.c libft/ft_putnbr_fd.c\
	   	libft/ft_putstr.c libft/ft_putstr_fd.c libft/ft_strcat.c\
	   	libft/ft_strchr.c libft/ft_strclr.c libft/ft_strcmp.c\
	   	libft/ft_strcpy.c libft/ft_strdel.c libft/ft_strdup.c\
		libft/ft_strequ.c libft/ft_striter.c libft/ft_striteri.c\
	   	libft/ft_strjoin.c libft/ft_strlcat.c libft/ft_strlen.c\
	   	libft/ft_strmap.c libft/ft_strmapi.c libft/ft_strncat.c\
	   	libft/ft_strncmp.c libft/ft_strncpy.c libft/ft_strnequ.c\
		libft/ft_strnew.c libft/ft_strnstr.c libft/ft_strstr.c\
	   	libft/ft_strsub.c libft/ft_strtrim.c libft/ft_tolower.c\
	   	libft/ft_toupper.c libft/ft_strrchr.c libft/ft_strsplit.c\
	   	libft/ft_itoa.c libft/ft_spacecheck.c libft/ft_wdcount.c\
	   	libft/ft_lstnew.c libft/ft_lstdelone.c libft/ft_lstdel.c\
	   	libft/ft_lstadd.c libft/ft_lstiter.c libft/ft_lstmap.c\
	   	libft/ft_wdlen.c libft/ft_range.c libft/ft_list_size.c

OBJS = 	ft_printf.o start_printf.o handle_str.o handle_int.o handle_more_int.o handle_int_etc.c\
		arg_check.o\
		ft_uitoa_base.o ft_itoa_base.o ft_ultoa_base.o format_out.o format_int.o\
		ft_atoi.o ft_bzero.o ft_isalnum.o\
		ft_isalpha.o ft_isascii.o ft_isdigit.o\
	   	ft_isprint.o ft_memalloc.o ft_memccpy.o\
	   	ft_memchr.o ft_memcmp.o ft_memcpy.o\
	   	ft_memdel.o ft_memmove.o ft_memset.o\
	   	ft_putchar.o ft_putchar_fd.o ft_putendl.o\
	   	ft_putendl_fd.o ft_putnbr.o ft_putnbr_fd.o\
	   	ft_putstr.o ft_putstr_fd.o ft_strcat.o\
	   	ft_strchr.o ft_strclr.o ft_strcmp.o\
	   	ft_strcpy.o ft_strdel.o ft_strdup.o\
		ft_strequ.o ft_striter.o ft_striteri.o\
	   	ft_strjoin.o ft_strlcat.o ft_strlen.o\
	   	ft_strmap.o ft_strmapi.o ft_strncat.o\
	   	ft_strncmp.o ft_strncpy.o ft_strnequ.o\
		ft_strnew.o ft_strnstr.o ft_strstr.o\
	   	ft_strsub.o ft_strtrim.o ft_tolower.o\
	   	ft_toupper.o ft_strrchr.o ft_strsplit.o\
	   	ft_itoa.o ft_spacecheck.o ft_wdcount.o\
	   	ft_lstnew.o ft_lstdelone.o ft_lstdel.o\
	   	ft_lstadd.o ft_lstiter.o ft_lstmap.o\
	   	ft_wdlen.o ft_range.o ft_list_size.o\
	   	ft_uitoa.o ft_uitoa_capbase.o ft_ltoa.o\

CMPSRCS = $(SRC) $(HANDLER) $(HELPER) $(LIBFT)
INCL = -I includes/libft.h -I includes/ft_printf.h

ODIR = objs

.PHONY: all clean fclean re
.SUFFIXES: .c .o

all : $(NAME)

$(NAME) : 
	$(CMP) $(CMPSRCS) $(INCL)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean : 
	/bin/rm -rf $(OBJS)

fclean : clean
	/bin/rm -rf $(NAME)

re : fclean all


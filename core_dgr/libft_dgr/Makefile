#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/25 16:27:00 by nd-heyge          #+#    #+#              #
#    Updated: 2014/01/25 12:27:36 by nd-heyge         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
	ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strlcat.c ft_strstr.c \
	ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c \
	ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
	ft_putchar.c ft_putstr.c ft_putnbr.c ft_putendl.c ft_striteri.c \
	ft_strmap.c ft_strmapi.c ft_itoa.c ft_strequ.c ft_strnequ.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_strsub.c \
	ft_strsplit.c ft_strjoin.c get_next_line.c ft_realloc.c ft_strndup.c \
	ft_strtrim.c ft_getnbr.c ft_dblarray.c

SRCO = $(SRCC:.c=.o)

all: $(NAME)

create_object: $(SRCO)
	gcc -Wall -Werror -Wextra -c $(SRCC) -I./includes

$(NAME): create_object
	ar rc $(NAME) $(SRCO)

clean :
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nd-heyge <nd-heyge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/22 12:20:03 by nd-heyge          #+#    #+#              #
#    Updated: 2014/02/02 17:29:47 by nd-heyge         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = a.out

SRCC = core.c check_file.c

SRCO = $(SRCC:.c=.o)

FLAG_LIB = -L libft_dgr/ -lft -L/usr/X11/lib -lmlx -lXext -lX11

all: $(NAME)

makefile_fclean:
	make -C libft_dgr/ fclean

$(NAME): $(SRCO)
	make -C libft_dgr/
	gcc -g -Wall -Werror -Wextra -c $(SRCC) -I libft_dgr/includes/
	gcc -g -o $(NAME) $(SRCO) $(FLAG_LIB)

clean : makefile_fclean
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

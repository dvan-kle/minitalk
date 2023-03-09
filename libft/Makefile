# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/17 18:02:14 by dvan-kle      #+#    #+#                  #
#    Updated: 2023/02/15 16:49:13 by danielvankl   ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

C=gcc

NAME=libft.a

CFLAGS=-Wall -Werror -Wextra

SRC=	ft_mem*.c \
		ft_str*.c \
		ft_to*.c \
		ft_is*.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_substr.c \
		ft_split.c \
		ft_itoa.c \
		ft_put*.c

OBJ=	*.o

BONUS=	ft_lstnew.c \
		ft_lstadd_back.c \
		ft_lstlast.c

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(C) $(CFLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

bonus: $(BONUS)
	$(C) $(CFLAGS) -c $(BONUS)
	ar -crs $(NAME) $(OBJ)

.PHONY: clean fclean all re bonus
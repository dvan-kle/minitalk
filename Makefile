# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-kle <dvan-kle@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/08 17:10:57 by dvan-kle      #+#    #+#                  #
#    Updated: 2023/02/08 17:19:09 by dvan-kle      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SOURCES = server.c client.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server client

server: server.o 
	$(CC) -o $@ $<

client: client.o 
	$(CC) -o $@ $<

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS)
	
fclean: clean
	rm -f server client

re: fclean all
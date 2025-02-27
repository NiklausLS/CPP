# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/04 12:07:04 by nileempo          #+#    #+#              #
#    Updated: 2024/10/24 12:00:21 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = abstract
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

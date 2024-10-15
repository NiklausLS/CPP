# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nileempo <nileempo@42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/09 21:52:39 by nileempo          #+#    #+#              #
#    Updated: 2024/10/14 10:22:01 by nileempo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED = \033[31m
GREEN  = \033[32m
YELLOW = \033[33m
BLUE   = \033[34m
RESET  = \033[0m

NAME = account
SRCS = Account.cpp \
		tests.cpp \

FLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CLFAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
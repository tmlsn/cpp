# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmalless <tmalless@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/02 18:38:00 by tmalless          #+#    #+#              #
#    Updated: 2024/07/22 17:49:23 by tmalless         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= PmergeMe

SRC		= main.cpp PmergeMe.cpp
OBJS 	= $(SRC:.c=.o)

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM		= rm -rf

GREEN	= \033[32m
YELLOW	= \033[33m
GRAY	= \033[37m
RESET	= \033[0m

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@echo "$(GREEN)$(NAME)$(RESET)$(GRAY) created.$(RESET)"

all: $(NAME)

%.o: %.c
		$(CC) $(FLAGS) -c $< -o $@
		@echo "$(GREEN)$(OBJS)$(RESET)$(GRAY) created.$(RESET)"

clean:
	$(RM) $(NAME)
	@echo "$(YELLOW)$(NAME)$(RESET)$(GRAY) deleted.$(RESET)"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
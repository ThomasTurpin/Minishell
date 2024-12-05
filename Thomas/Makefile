# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tturpin <tturpin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 16:52:12 by tturpin           #+#    #+#              #
#    Updated: 2024/12/05 17:30:42 by tturpin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= cc
CFLAGS	= -Wall -Werror -Wextra
NAME	= test_minishell

SRC_PATH = src/
OBJ_PATH = obj/

SRC		= main_test.c liste.c


SRCS	= $(addprefix $(SRC_PATH), $(SRC))
OBJ		= $(SRC:.c=.o)
OBJS	= $(addprefix $(OBJ_PATH), $(OBJ))
HEAD	= -I ./header/tester.h

all: $(OBJ_PATH) $(NAME)


$(OBJ_PATH):
	mkdir $(OBJ_PATH)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(HEAD)


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -lreadline

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

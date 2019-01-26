# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbeguin <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/06 12:23:45 by tbeguin           #+#    #+#              #
#    Updated: 2019/01/26 10:29:25 by nicktor          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SRC_DIR	= ./src
OBJ_DIR	= ./obj
INC_DIR	= ./inc
LIB_DIR	= ./lib


LIB_FT		= $(LIB_DIR)/libft
FT_LNK		= -L $(LIB_FT) -l ft

SRC = main.c		\
	  util.c		\
	  util_2.c		\
	  read.c		\
	  tetrimino.c	\
	  solve.c

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

all :
	@mkdir -p $(OBJ_DIR)
	@make -C $(LIB_FT)
	@make $(NAME)

$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -I $(LIB_FT) -I $(INC_DIR) $(FT_LNK) -c $< -o $@
	@echo "\033[36m$(CC) $(CFLAGS) -c $< -o $@\033[0m"
	
$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) $(FT_LNK) -o $(NAME)
	@echo "\033[32m$(NAME) Created\033[0m"
 
clean : cleanlib
	@rm -Rf $(OBJ_DIR)
	@echo "\033[31mRemoved obj files\033[0m"

fclean : fcleanlib clean
	@rm -f $(NAME)
	@echo "\033[31mRemoved $(NAME)\033[0m"

re : fclean all

cleanlib :
	@make -C $(LIB_FT) clean

fcleanlib :
	@make -C $(LIB_FT) fclean

norme :
	norminette -R CheckForbiddenSourceHeader $(addprefix $(SRC_DIR)/,$(SRC)) $(INC_DIR)/fillit.h

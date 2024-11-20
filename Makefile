# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albbermu <albbermu@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 11:34:37 by albbermu          #+#    #+#              #
#    Updated: 2024/04/25 11:51:54 by albbermu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror
AR = ar
ARFLAGS := rcs
SRC := check_format.c ft_printf.c ft_printf_helpers_1.c ft_printf_helpers_2.c
OBJ := $(SRC:.c=.o)
HEADER := ft_printf.h
LIBFT = libft/libft.a

# ANSI escape codes for colors
GREEN = \033[0;32m
RED = \033[0;31m
YELLOW = \033[0;33m
RESET = \033[0m

all: $(NAME)
	@echo "$(GREEN)All files were compiled successfully.$(RESET)"

$(LIBFT):
	@make -C libft

$(NAME): $(OBJ) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	@$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@make clean -C libft
	@echo "$(YELLOW)Cleaned object files.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@make fclean -C libft
	@echo "$(YELLOW)Cleaned all files.$(RESET)"

re: fclean all

test: $(NAME)
	@$(CC) $(CFLAGS) -o test test.c -L. -lftprintf
	@./test

.PHONY: all clean fclean re test

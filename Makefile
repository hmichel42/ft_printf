# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: hmichel <hmichel@student.le-101.fr>        +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/02/06 16:29:54 by maegaspa     #+#   ##    ##    #+#        #
#    Updated: 2019/05/27 23:09:02 by hmichel     ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
INC = /includes/ft_printf.h
INCLUDE = includes

FILES = nsm\
		util\
		wp_ftreat\
		wp_streat\
#		wp_dtreat\
		wp_ftreat\
		wp_otreat\
		wp_oxtreat\
		wp_streat\
		wp_utreat

SRC = $(addsuffix .c, $(FILES))
OBJ = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Compilation"
	@make -C libft/
	@cp libft/libft.a ./$(NAME)
	@ar rcs  $(NAME) $(OBJ)
	@ranlib $(NAME)
	
object/%.o	:	%.c $(INCLUDE)
	@mkdir -p obj
	@$(CC) $(FLAGS) -I $(INCLUDE) -o $@ -c $<

clean:
	@echo "	 ██████╗██╗     ███████╗ █████╗ ███╗   ██╗██╗███╗   ██╗ ██████╗     ██████╗ ██████╗ ██╗███╗   ██╗████████╗███████╗"
	@echo "	██╔════╝██║     ██╔════╝██╔══██╗████╗  ██║██║████╗  ██║██╔════╝     ██╔══██╗██╔══██╗██║████╗  ██║╚══██╔══╝██╔════╝"
	@echo "	██║     ██║     █████╗  ███████║██╔██╗ ██║██║██╔██╗ ██║██║  ███╗    ██████╔╝██████╔╝██║██╔██╗ ██║   ██║   █████╗  "
	@echo "	██║     ██║     ██╔══╝  ██╔══██║██║╚██╗██║██║██║╚██╗██║██║   ██║    ██╔═══╝ ██╔══██╗██║██║╚██╗██║   ██║   ██╔══╝  "
	@echo "	╚██████╗███████╗███████╗██║  ██║██║ ╚████║██║██║ ╚████║╚██████╔╝    ██║     ██║  ██║██║██║ ╚████║   ██║   ██║     "
	@echo "	 ╚═════╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═╝╚═╝  ╚═══╝ ╚═════╝     ╚═╝     ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝     "
	@rm -f $(OBJ)
	@make clean -C libft/

onlylibft:
	@make -C libft/

fclean: clean
	@echo "--------------------------------------------"
	@echo "\n- Cleaning 'libft.a' and libftprintf.a -"
	@echo "\n--------------------------------------------"
	@rm -f $(NAME)
	@make fclean -C libft/

re: fclean all

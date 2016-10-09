##
## Makefile for corewar in /home/moutou_m/rendu/CPE/CPE_2015_corewar
##
## Made by moutou_m
## Login   <moutou_m@epitech.net>
##
## Started on  Thu Mar 24 21:51:38 2016 moutou_m
## Last update Thu Mar 24 21:51:38 2016 moutou_m
##

SRC	= $(shell find ./src -name '*.c')

NAME	= libvector.a

count	= 0
counter = $(shell find ./src -name '*.c' | wc -l)

CC	= gcc

CFLAGS	= -W -Wall -Wextra -Werror -I./include/ -I../liberror/include/

RM	= rm -f

OBJ	= $(SRC:.c=.o)

all: $(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@mv $(NAME) ../
	@echo

clean:
	@$(RM) $(OBJ)
	@$(RM) *~

fclean: clean
	@$(RM) ../$(NAME)
	@$(RM) $(NAME)

re: fclean all

%.o: %.c
	$(eval count=$(shell echo $$(($(count)+1))))
	@echo -ne "\r$(shell echo "$(count) * 100 / $(counter)" | bc)% \e[1;34m$(NAME)\e[0m"
	@$(CC) -o $@ -c $< $(CFLAGS)

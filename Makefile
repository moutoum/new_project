##
## Makefile for corewar in /home/moutou_m/rendu/CPE/CPE_2015_corewar
##
## Made by moutou_m
## Login   <moutou_m@epitech.net>
##
## Started on  Thu Mar 24 21:51:38 2016 moutou_m
## Last update Mon Aug 22 21:14:15 2016 moutou_m
##

LIB_PATH	=	lib/

#src
SRC		=	$(shell find ./src -name '*.c')

#Name
NAME		= 	exec

#Compile
CC		= 	gcc

#Flags
CFLAGS		+= 	-W \
			-Wall \
			-Wextra \
			-Werror \
			-I./include/ \
			-g

#lib

LIBS			= 	$(shell find $(LIB_PATH) -name 'lib*.a')

#_LIBS 		= 	$(patsubst lib%, l%, $(basename $(notdir $(shell find ./lib -name 'lib*.a'))))
#LIBS 		= 	$(foreach lib, $(_LIBS), -$(lib))
LDFLAGS 	+=	-L./$(LIB_PATH) -lmerged #-lvector -lerror -ltoolalloc
			#$(LIBS)

#Remove
RM		= 	rm -f

#Object
OBJ		= 	$(SRC:.c=.o)

#Colors
DEFAULT         =       \033[00m
GREEN           =       \033[1;32m
TEAL            =       \033[1;36m
RED             =       \033[1;31m

count		= 	0
counter 	= 	$(shell find ./src -name '*.c' | wc -l)

all: libs merge $(NAME)

libs:
	@(cd $(LIB_PATH) ; make -s)

merge:
	@ar rcT $(LIB_PATH)libmerged.a $(LIBS)
	@ranlib $(LIB_PATH)libmerged.a

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)
	@echo

clean:
	@(cd $(LIB_PATH) ; make clean -s)
	@$(RM) $(OBJ)
	@$(RM) *~

fclean: clean
	@(cd $(LIB_PATH) ; make fclean -s)
	@$(RM) ./lib/libmerged.a
	@$(RM) $(NAME)

re: fclean all

%.o: %.c
	$(eval count=$(shell echo $$(($(count)+1))))
	@echo -ne "\r$(shell echo "$(count) * 100 / $(counter)" | bc)% \e[1;34m- $(NAME) -\e[0m"
	@$(CC) -o $@ -c $< $(CFLAGS)

.PHONY: all clean fclean re

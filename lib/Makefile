##
## Makefile for Makefile in /home/moutou_m/rendu/CPE/CPE_2015_corewar/lib
##
## Made by moutou_m
## Login   <moutou_m@epitech.net>
##
## Started on  Fri Mar 25 18:23:17 2016 moutou_m
## Last update Fri Mar 25 18:23:19 2016 moutou_m
##

MAKEFILES = $(shell find . -name 'Makefile' | grep 'lib*')
LIBS = $(shell dirname $(MAKEFILES))

all: compile

compile:
	 @for path in $(LIBS); do \
	 		cd $$path/ ; \
			make -s; \
			cd - > /dev/null; \
			cp $$path/include/* ../include/; \
	 done

clean:
	@for path in $(LIBS); do \
		 cd $$path/ ; \
		 make clean -s; \
		 cd - > /dev/null; \
	done

fclean:
	@for path in $(LIBS); do \
		 cd $$path/ ; \
		 make fclean -s; \
		 cd - > /dev/null; \
	done

re: fclean all

##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for esoterix
##

NAME         =		    esoterix

INCLUDE      =         -I include/ -I include/lib/ -L lib/ \
                       -lmy -lmyprintf -lformatstring

CFLAGS      +=         -Wall -Wextra -Werror -fvisibility=hidden $(INCLUDE)

SOURCES      =         src/

SRC          =         $(SOURCES)main.c

SRC_COUNT    =         $(words $(SRC))

NB           =         0

OBJ          =	        $(SRC:.c=.o)

TEMPFILES    =         *~ *vgcore* #*#

RM           =         rm -f

ECHO         =         /bin/echo -e
DEFAULT      =         "\033[00m"
BOLD         =         "\e[1m"
RED          =         "\e[31m"
GREEN        =         "\e[32m"
LIGHT_BLUE   =         "\e[94m"
WHITE        =         "\e[1;37m"

all:	$(NAME)

$(NAME):	$(OBJ)
			@echo
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE) \
			"SRC files sucessfully build. "$(DEFAULT))
			@make -C lib/my/ --no-print-directory
			@make -C lib/myprintf/ --no-print-directory
			@make -C lib/formatstring/ --no-print-directory
			@gcc -o $(NAME) $(OBJ) $(INCLUDE) \
			&& $(ECHO) $(BOLD) $(GREEN)"\n► BUILD SUCCESS !"$(DEFAULT) \
			|| ($(ECHO) $(BOLD) $(RED)"\n► BUILD FAILED"$(DEFAULT) && exit 1)

debug:		CFLAGS += -g3 -pg
debug:		all

clean:
			@make -C lib/my/ clean --no-print-directory
			@make -C lib/myprintf/ clean --no-print-directory
			@make -C lib/formatstring/ clean --no-print-directory
			@$(RM) $(OBJ)
			@$(RM) $(TEMPFILES)
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" Clean SRC "$(DEFAULT))

fclean:		clean
			@make -C lib/myprintf/ fclean --no-print-directory
			@make -C lib/formatstring/ fclean --no-print-directory
			@make -C lib/my/ fclean --no-print-directory
			@$(RM) $(NAME)
			@$(RM) $(OBJ)
			@$(RM) $(TEMPFILES)
			@($(ECHO) $(BOLD) $(GREEN)✓$(LIGHT_BLUE)" Fclean SRC "$(DEFAULT))

re:
			@make fclean --no-print-directory
			@make --no-print-directory

%.o:		%.c
			@$(eval NB=$(shell echo $$(($(NB)+1))))
			@gcc -c -o $@ $^ $(CFLAGS) && python3 build/build.py $< $(NB) \
			$(SRC_COUNT)

.PHONY: all re clean fclean debug

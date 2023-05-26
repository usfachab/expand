NAME = lexer

CC = cc

CFALGS = -Wextra -Werror -Wall

LDFLAG = -lreadline -I/Users/yachaab/.brew/Cellar/readline/8.2.1/lib/ -L/Users/yachaab/.brew/Cellar/readline/8.2.1/lib/

MINI_SRC = main.c lexer.c parser.c expand.c src/find_and_replace.c

MINI_OBJ = $(MINI_SRC:.c=.o)

all : $(NAME)

$(NAME) : $(MINI_OBJ)
	@$(CC) $(CFALGS) -o $@ $(MINI_SRC) $(LDFLAG)

%.o : %.c
	@$(CC) $(CFALGS) -o $@ $(MINI_SRC) $(LDFLAG)
clean :
	@rm -fr $(MINI_OBJ)

fclean : clean
	@rm -fr $(MINI_OBJ) $(NAME)

re : fclean all
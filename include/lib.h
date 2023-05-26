#ifndef LIB_H
#define LIB_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "struct.h"
/* --------------- current folder -----------------*/
void	*lexer(char *string);
t_data	*parser(char *string, char **env);
void	execution(t_data *data);
char    *expandEnvVariables(char *command);
/* ----------------- src folder -------------------*/
void	find_char_and_replace_with_unprintable(char *str);
void	find_unprintable_and_replace_with_char(char *str);
/* ---------------- lexer.c file ------------------*/
t_lexer	*init_lexer(char *content);
void	lexer_advence(t_lexer *lexer);
char	*lexer_collect_string(t_lexer *lexer);
void	lexer_skip_white_space(t_lexer *lexer);
void	lexer_advence(t_lexer *lexer);
/* ---------------- main.c file -------------------*/
void	execution(t_data *data);
#endif
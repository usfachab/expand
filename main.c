/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:26:45 by yachaab           #+#    #+#             */
/*   Updated: 2023/05/18 13:54:11 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/lib.h"
#include "include/struct.h"

int exit_status = 0;
void	execution(t_data *data)
{
	(void)data;
	printf("exec\n");
}
int main(int argc, char *argv[], char *env[])
{
	(void)argc;(void)argv;(void)env;
	while (1)
	{
		char	*input;
		input = readline("minishell -> ");
		if (!input)
			exit(EXIT_FAILURE);
		add_history(input);
		input = expandEnvVariables(input);
		printf("input: %s\n", input);
		// if (lexer(input))
		// {
		// 	input = expandEnvVariables(input);
		// 	//t_data	*data = parser(input, env);
		// 	//execution(data);
		// }
		free(input);
	}
	return (0);
}

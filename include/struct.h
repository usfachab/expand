/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yachaab <yachaab@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 21:29:07 by yachaab           #+#    #+#             */
/*   Updated: 2023/05/21 17:59:17 by yachaab          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

// typedef struct INFILE_STRUCT
// {
// 	char					*infile;
// 	struct OUTFILE_STRUCT	*next;
// }	t_infile;

// typedef struct OUTFILE_STRUCT
// {
// 	char					*outfile;
// 	struct OUTFILE_STRUCT	*next;
// }	t_outfile;

typedef struct INFILE_STRUCT
{
	char					*infile;
	struct INFILE_STRUCT	*next;
}	t_infile;

typedef struct OUTFILE_STRUCT
{
	char					*outfile;
	struct OUTFILE_STRUCT	*next;
}	t_outfile;

typedef struct COMMAND_STRUCT
{
	char					**cmd_and_args;
}	t_cmd_args;

typedef struct DATA_STRUCT
{
	t_infile				*infile;
	t_outfile				*outfile;
	t_cmd_args				*cmd_args;
	struct DATA_STRUCT		*next;
}	t_data;

typedef struct LEXER_STRUCT
{
	char			c;
	unsigned int	i;
	char			*content;
}	t_lexer;

typedef struct TOKEN_STRUCT
{
	enum
	{
		TOKEN_STRING,
		TOKEN_PIPE,
		TOKEN_INFILE,
		TOKEN_OUTFILE,
		TOKEN_HDC,
		TOKEN_APPAND,
	} type;
	char *value;
}	t_token;

#endif
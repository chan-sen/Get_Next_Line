/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chansen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:55:05 by chansen           #+#    #+#             */
/*   Updated: 2016/11/09 18:57:41 by chansen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define	BUFF_SIZE	14
# include "./libft/libft.h"
# include <fcntl.h>

int		get_next_line(const int fd, char **line);
 
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 12:35:51 by omaslova          #+#    #+#             */
/*   Updated: 2018/04/14 14:02:32 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list	t_list;

struct					s_list
{
	int					data;
	t_list				*next;
};

void					*push_back(t_list **lst, t_list *new);
void					print(t_list *lst);
t_list					*create_node(int data);
t_list					*sort_list(t_list *lst, int (*cmp)(int, int));

#endif

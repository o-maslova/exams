/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:33:10 by omaslova          #+#    #+#             */
/*   Updated: 2018/04/14 13:36:17 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void    *push_back(t_list **lst, t_list *new)
{
    t_list *list;
    t_list *tmp;

    list = NULL;
    tmp = NULL;
    if ((*lst) == NULL)
    {
        (*lst) = (t_list *)malloc(sizeof(t_list));
        *lst = new;
        return (*lst);
    }
    list = *lst;
    while (list->next)
    {
        list = list->next;
    }
    list->next = (t_list *)malloc(sizeof(t_list));
    list->next = new;
    return (list);
}

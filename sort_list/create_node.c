/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:34:19 by omaslova          #+#    #+#             */
/*   Updated: 2018/04/14 13:34:31 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list  *create_node(int data)
{
    t_list *list;

    if (!(list = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    list->data = data;
    list->next = NULL;
    return (list);
}

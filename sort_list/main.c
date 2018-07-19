/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaslova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 14:00:52 by omaslova          #+#    #+#             */
/*   Updated: 2018/04/14 14:03:31 by omaslova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int     ascending(int a, int b)
{
    return (a >= b);
}

int main()
{
    t_list *list;
    t_list *elem1;
    t_list *elem2;
    t_list *elem3;
    t_list *elem4;
    t_list *elem5;

    list = NULL;
    elem1 = create_node(56);
    elem2 = create_node(7);
    elem3 = create_node(-9);
    elem4 = create_node(2);
    elem5 = create_node(44);

    push_back(&list, elem1);
    push_back(&list, elem2);
    push_back(&list, elem3);
    push_back(&list, elem4);
    push_back(&list, elem5);

    print(list);
    printf("\n");
    print(sort_list(list, &ascending));

    return (0);
}

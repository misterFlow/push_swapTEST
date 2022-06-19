/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:56:53 by fguy              #+#    #+#             */
/*   Updated: 2022/06/11 11:56:56 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	pa(t_list **list_a, t_list **list_b, int p)
{
	t_list	*tmp;

	if (!(*list_b))
		return ;
	tmp = *list_b;
	*list_b = (*list_b)->next;
	tmp->next = *list_a;
	*list_a = tmp;
	if (p == 1)
		write(1, "pa\n", 3);
	if (p == 2)
	{
		ft_putstr("\x1b[36mExecute pa:\n\n");
		visualizer(*list_a, *list_b);
	}
}

void	pb(t_list **list_a, t_list **list_b, int p)
{
	t_list	*tmp;

	if (!(*list_a))
		return ;
	tmp = *list_a;
	*list_a = (*list_a)->next;
	tmp->next = *list_b;
	*list_b = tmp;
	if (p == 1)
		write(1, "pb\n", 3);
	if (p == 2)
	{
		ft_putstr("\x1b[36mExecute pb:\n\n");
		visualizer(*list_a, *list_b);
	}
}
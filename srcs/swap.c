/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguy <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 11:57:47 by fguy              #+#    #+#             */
/*   Updated: 2022/06/11 11:57:50 by fguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sa(t_list *list_a, t_list *list_b, int p)
{
	if (!list_a)
		return ;
	if (list_a->next)
	{
		ft_swap(&list_a->content, &list_a->next->content);
		if (p == 1)
			ft_putstr("sa\n");
		if (p == 2)
		{
			ft_putstr("\x1b[36mExecute sa:\n\n");
			visualizer(list_a, list_b);
		}
	}
}

void	sb(t_list *list_a, t_list *list_b, int p)
{
	if (!list_b)
		return ;
	if (list_b->next)
	{
		ft_swap(&list_b->content, &list_b->next->content);
		if (p == 1)
			ft_putstr("sb\n");
		if (p == 2)
		{
			ft_putstr("\x1b[36mExecute sb:\n\n");
			visualizer(list_a, list_b);
		}
	}
}

void	ss(t_list *list_a, t_list *list_b, int p)
{
	sa(list_a, list_b, 0);
	sb(list_a, list_b, 0);
	if (p == 1)
		ft_putstr("ss\n");
	if (p == 2)
	{
		ft_putstr("\x1b[36mExecute ss:\n\n");
		visualizer(list_a, list_b);
	}
}
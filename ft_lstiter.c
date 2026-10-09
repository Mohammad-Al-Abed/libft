/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moal-abe <moal-abe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:01:00 by moal-abe          #+#    #+#             */
/*   Updated: 2026/09/29 18:07:05 by moal-abe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	ptr = lst;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
	return ;
}
/*

int	main ()
{
	void	print(void *content)
	{
		printf("%s", (char *)content);
	}
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	char	*a;
	char	*b;
	char	*c;
	
	a = "moe";
	b = "al";
	c = "abed";
	node1 = ft_lstnew(a);
	node2 = ft_lstnew(b);
	node3 = ft_lstnew(c);
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;
	ft_lstiter(node1, print);
}
int	main()
{
	t_list	*node;

	node = ft_lstnew("moe");
	node->next = ft_lstnew("al");
	node->next->next = ft_lstnew("abed");
	ft_lstiter(node, print);
	return (0);
}
*/

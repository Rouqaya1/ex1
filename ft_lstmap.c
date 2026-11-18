/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsiba <rsiba@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 12:16:09 by rsiba             #+#    #+#             */
/*   Updated: 2026/11/16 14:49:59 by rsiba            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ==========================================================================
// =============DEscription de la fonction ==================================


// Paramètres lst : L’adresse d’un pointeur vers un maillon.

// f : L’adresse de la fonction à appliquer au contenu de chaque maillon.

// del : L’adresse de la fonction utilisée pour supprimer le contenu dun maillon
// si nécessaire.

// Valeur de retour : La nouvelle liste. NULL si l’allocation échoue.
// Fonctions externes : malloc, free

// Description : Parcourt la liste « lst », applique la fonction f au contenu 
// de chaque maillon et crée une nouvelle liste résultant des applications 
// successives de la fonction « f ». La fonction « del » est utilisée pour 
// supprimer le contenu d’un maillon, si nécessaire.

// =================FIN de Description de la fonction==================
// ===========================Proceder===============================

// Etapre 1 ; Parcourir la chaine et appliquer f a chaque contenu de la liste 
// et sauvgarde le resultat dans une nouvelle liste avec un malloc en ajoutant
// le nouveau contenu et le next.

// DEtap 2 si necessaire et de supprimer et de libere un maillon si besoin
// si l'allocation echoue

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*first_node;
	void	*content;

	first_node = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		if (!first_node)
			first_node = new_node;
		else
			ft_lstadd_back(&first_node, new_node);
		lst = lst->next;
	}
	return (first_node);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: jmaia-de <jmaia-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:37:43 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/06/02 12:31:09 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
=======
/*   By: jmaia-de <jvmdob@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 19:37:43 by jmaia-de          #+#    #+#             */
/*   Updated: 2022/05/14 19:58:25 by jmaia-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
>>>>>>> 91915bb06befd077339a5d28fd04e2f6f9de7c68

void	ft_strdel(char **as)
{
	free(*as);
	*as = NULL;
}
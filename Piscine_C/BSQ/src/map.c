/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 14:30:56 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/17 21:08:49 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/bsq.h"

// int **create_map(int m, int n)
// {
//     int* values = malloc(n * sizeof(int) * m);
//     int** rows = malloc(n * sizeof(int*));
//     for (int i=0; i<n; ++i)
//     {
//         rows[i] = 
//     }
//     return rows;
// }

void destroy_map(int **arr)
{
    free(*arr);
    free(arr);
}

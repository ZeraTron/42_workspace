/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 12:16:56 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/15 16:16:39 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_refs.h"

void createNode(t_dict *s, char *key, int keySize, char *value, t_dict *next)
{
    s->key = key;
    s->keySize = keySize;
    s->value = value;
	s->next = next;
	//printf("created node: %s, %d, %s\n", s->key, s->keySize, s->value);
}

void display(t_dict *dict)
{
	int i;
	char *res;

	i = 0;
	while (dict->value[i])
		i++;
	write(1, dict->value, i);
	write(1, " ", 1);
}

int get_cut_size(char *tab)
{
	int i;

	i = 0;
	while(tab[i])
		i++;
	return (i);
}

void genDict()
{
	createNode(&elem0, "0", 1, "zero", &elem1);
	createNode(&elem1, "1", 1, "one", &elem2);
	createNode(&elem2, "2", 1, "two", &elem3);
	createNode(&elem3, "3", 1, "three", &elem4);
	createNode(&elem4, "4", 1, "four", &elem5);
	createNode(&elem5, "5", 1, "five", &elem6);
	createNode(&elem6, "6", 1, "six", &elem7);
	createNode(&elem7, "7", 1, "seven", &elem8);
	createNode(&elem8, "8", 1, "eight", &elem9);
	createNode(&elem9, "9", 1, "nine", &elem10);
	createNode(&elem10, "10", 2, "ten", &elem11);
	createNode(&elem11, "11", 2, "eleven", &elem12);
	createNode(&elem12, "12", 2, "twelve", &elem13);
	createNode(&elem13, "13", 2, "thirteen", &elem14);
	createNode(&elem14, "14", 2, "fourteen", &elem15);
	createNode(&elem15, "15", 2, "fiveteen", &elem16);
	createNode(&elem16, "16", 2, "sixteen", &elem17);
	createNode(&elem17, "17", 2, "seventeen", &elem18);
	createNode(&elem18, "18", 2, "eighteen", &elem19);
	createNode(&elem19, "19", 2, "nineteen", &elem20);
	createNode(&elem20, "20", 2, "twenty", &elem21);
	createNode(&elem21, "30", 2, "thirty", &elem22);
	createNode(&elem22, "40", 2, "forty", &elem23);
	createNode(&elem23, "50", 2, "fifty", &elem24);
	createNode(&elem24, "60", 2, "sixty", &elem25);
	createNode(&elem25, "70", 2, "seventy", &elem26);
	createNode(&elem26, "80", 2, "eighty", &elem27);
	createNode(&elem27, "90", 2, "ninety", &elem28);
	createNode(&elem28, "100", 3, "hundred", &elem29);
	createNode(&elem29, "1000", 4, "thousand", &elem30);
    createNode(&elem30, "1000000", 7, "million", &elem31);
    createNode(&elem31, "1000000000", 10, "billion", &elem32);
    createNode(&elem32, "1000000000000", 13, "trillion", &elem33);
    createNode(&elem33, "1000000000000000", 16, "quadrillion", &elem34);
    createNode(&elem34, "1000000000000000000", 19, "quintillion", &elem35);
    createNode(&elem35, "1000000000000000000000", 22, "sextillion", &elem36);
    createNode(&elem36, "1000000000000000000000000", 25, "septillion", &elem37);
    createNode(&elem37, "1000000000000000000000000000", 28, "octillion", &elem38);
    createNode(&elem38, "1000000000000000000000000000000", 31, "nonillion", &elem39);
    createNode(&elem39, "1000000000000000000000000000000000", 34, "decillion", &elem40);
    createNode(&elem40, "1000000000000000000000000000000000000", 37, "undecillion", &elem0);
}
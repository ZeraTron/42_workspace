/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_refs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 19:11:46 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/15 16:17:42 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_REFS_H
# define FT_REFS_H
	#include <unistd.h>
	#include <stdlib.h>

	typedef	struct	s_dict 
	{ 
		char			*key;
		int				keySize;
		char			*value;
		struct	s_dict 	*next;
	}				t_dict;

	struct	s_dict	elem0;
	struct	s_dict	elem1;
	struct	s_dict	elem2;
	struct	s_dict	elem3;
	struct	s_dict	elem4;
	struct	s_dict	elem5;
	struct	s_dict	elem6;
	struct	s_dict	elem7;
	struct	s_dict	elem8;
	struct	s_dict	elem9;
	struct	s_dict	elem10;
	struct	s_dict	elem11;
	struct	s_dict	elem12;
	struct	s_dict	elem13;
	struct	s_dict	elem14;
	struct	s_dict	elem15;
	struct	s_dict	elem16;
	struct	s_dict	elem17;
	struct	s_dict	elem18;
	struct	s_dict	elem19;
	struct	s_dict	elem20;
	struct	s_dict	elem21;
	struct	s_dict	elem22;
	struct	s_dict	elem23;
	struct	s_dict	elem24;
	struct	s_dict	elem25;
	struct	s_dict	elem26;
	struct	s_dict	elem27;
	struct	s_dict	elem28;
	struct	s_dict	elem29;
	struct	s_dict	elem30;
	struct	s_dict	elem31;
	struct	s_dict	elem32;
	struct	s_dict	elem33;
	struct	s_dict	elem34;
	struct	s_dict	elem35;
	struct	s_dict	elem36;
	struct	s_dict	elem37;
	struct	s_dict	elem38;
	struct	s_dict	elem39;
	struct	s_dict	elem40;

	struct	s_dict	*begin;

	int				get_cut_size(char *tab);
	int				diviseur(char c, char *charset);
	int				next_word(char *str, char *charset);
	int				c_w(char *str, char *charset);
	char			**ft_split(char *str, char *charset);
	void			copy(char *dest, char *src, int length);
	void			genDict(void);
	void			display(struct s_dict *dict);
	void			createNode(struct s_dict *s, char *key, int keySize, char *value, struct s_dict *next);
#endif
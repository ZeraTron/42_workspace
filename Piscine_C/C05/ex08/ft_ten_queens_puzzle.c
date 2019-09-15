/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:53:02 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/15 19:11:08 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 10 

void printSolution(int board[N][N]) 
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < N)
	{ 
		while (j < N)
		{
			write(1, board[i][j]);
			j++;
		}
		i++;
	} 
} 

int isSafe(int board[N][N], int row, int col) 
{ 
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < col)
	{
		if (board[row][i]) 
			return (0);
		i++;
	}
	i = row;
	j = col;
	while (i >= 0 && j >= 0) 
	{
		if (board[i][j]) 
			return (0);
		i--;
		j--;
	}
	i = row;
	j = col;
	while (j >= 0 && i < N) 
	{
		if (board[i][j]) 
			return (0);
		i++;
		j--;
	}
	return (1); 
} 

int solveNQUtil(int board[N][N], int col) 
{
	int i;

	i = 0;
	if (col >= N) 
		return (1); 
	while (i < N) { 
		if (isSafe(board, i, col)) { 
			board[i][col] = 1; 
			if (solveNQUtil(board, col + 1)) 
				return (1); 
			board[i][col] = 0;
		}
		i++;
	}
	return (0); 
} 

int solveNQ() 
{ 
	int board[N][N] = { { 0, 0, 0, 0 }, 
						{ 0, 0, 0, 0 }, 
						{ 0, 0, 0, 0 }, 
						{ 0, 0, 0, 0 } }; 

	if (solveNQUtil(board, 0) == (0)) { 
		return (0); 
	} 

	printSolution(board); 
	return (1); 
} 

int main() 
{ 
	solveNQ(); 
	return 0; 
} 

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdubois <kdubois@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 18:53:02 by kdubois           #+#    #+#             */
/*   Updated: 2019/09/17 12:00:58 by kdubois          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 10

void	print_solution(int board[N][N])
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

int		is_safe(int board[N][N], int row, int col)
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

int		solve_nq_util(int board[N][N], int col)
{
	int i;

	i = 0;
	if (col >= N)
		return (1);
	while (i < N)
	{
		if (is_safe(board, i, col))
		{
			board[i][col] = 1;
			if (solveNQUtil(board, col + 1))
				return (1);
			board[i][col] = 0;
		}
		i++;
	}
	return (0);
}

int		solve_nq(void)
{
	int board[N][N] = { { 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 },
						{ 0, 0, 0, 0 } };

	if (solve_nq_util(board, 0) == (0))
	{
		return (0);
	}

	print_solution(board);
	return (1);
}

int		main(void)
{
	solve_nq();
	return (0);
}



int		flood_fill(char **board, int size, int i)
{
	int		n;

	n = 0;
	if (board[i / size][i % size] == '.')
	{
		n++;
		n += i % size < size - 1 ?
			flood_fill(board, size, i + 1) : 0;
		n += i / size > 0 ?
			flood_fill(board, size, i - size) : 0;
		n += i % size > 0 ?
			flood_fill(board, size, i - 1) : 0;
		n += i / size < size - 1 ?
			flood_fill(board, size, i + size) : 0;
	}
	return (n);
}
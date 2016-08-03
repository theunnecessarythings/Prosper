#include "triomino.h"

Triomino::Triomino() {
	ch = 1;
	stage = 1;
	cout << "Enter board size : ";
	cin >> board_size;
	for (int i = 0; i < board_size; i++)
		for (int j = 0; j < board_size; j++) board[i][j] = 0;
	cout << "Missing square coordinates : ";
	cin >> x_missing >> y_missing;
	board[x_missing][y_missing] = -1;
	fillBoard(0, 0, x_missing, y_missing, board_size);
}

void Triomino::display(int opt, int x_board, int y_board) {
	cout << "Stage=" << stage++ << endl;
	if (opt == 1) {
		board[x_board][y_board] = ch;
		board[x_board][y_board - 1] = ch;
		board[x_board - 1][y_board] = ch;
	} else if (opt == 2) {
		board[x_board][y_board] = ch;
		board[x_board][y_board - 1] = ch;
		board[x_board - 1][y_board - 1] = ch;
	} else if (opt == 3) {
		board[x_board][y_board] = ch;
		board[x_board - 1][y_board] = ch;
		board[x_board - 1][y_board - 1] = ch;
	} else if (opt == 4) {
		board[x_board - 1][y_board] = ch;
		board[x_board][y_board - 1] = ch;
		board[x_board - 1][y_board - 1] = ch;
	}
	ch++;
	for (int i = 0; i < board_size; i++) {
		for (int j = 0; j < board_size; j++) cout << board[i][j] << "\t";
		cout << endl << endl;
	}
}

void Triomino::fillBoard(int x_board, int y_board, int x_missing, int y_missing,
												 int board_size) {
	int half_size = board_size / 2, x_center, y_center, x_upper_left,
			y_upper_left, x_upper_right, y_upper_right, x_lower_right, y_lower_right,
			x_lower_left, y_lower_left;
	if (board_size == 2) { /* 2x2 board */
		/* print position of tromino */
		// printf( "%d %d ", x_board + 1, y_board + 1 );

		/* find and print orientation of tromino */
		if (x_board == x_missing)	 /* missing square in left half */
			if (y_board == y_missing) /* missing square in lower left */
				// printf( "UR\n" );
				display(1, x_board + 1, y_board + 1);
			else
				/* missing square in upper left */
				// printf( "LR\n" );
				display(2, x_board + 1, y_board + 1);
		else
				/* missing square in right half */
				if (y_board == y_missing)
			/* missing square in lower right */
			// printf( "UL\n" );
			display(3, x_board + 1, y_board + 1);
		else
			/* missing square in upper right */
			// printf( "LL\n" );
			display(4, x_board + 1, y_board + 1);
		return;
	}
	x_center = x_board + half_size;
	y_center = y_board + half_size;
	/* print position of special, center tromino */
	// printf( "%d %d ", x_center, y_center );

	/* Find and print orientation of center tromino.
					Also, set x_upper_left, y_upper_left, ... .	*/
	if (x_missing < x_center) {
		/* missing square in left half */
		x_upper_right = x_lower_right = x_center;
		y_upper_right = y_center;
		y_lower_right = y_center - 1;
		if (y_missing < y_center) {
			/* missing square in lower left quadrant */
			// printf( "UR\n" );
			display(1, x_center, y_center);
			x_upper_left = x_center - 1;
			y_upper_left = y_center;
			x_lower_left = x_missing;
			y_lower_left = y_missing;
		} else {
			/* missing square in upper left quadrant */
			// printf( "LR\n" );
			display(2, x_center, y_center);
			x_upper_left = x_missing;
			y_upper_left = y_missing;
			x_lower_left = x_center - 1;
			y_lower_left = y_center - 1;
		}
	} else {
		/* missing square in right half */
		x_upper_left = x_lower_left = x_center - 1;
		y_upper_left = y_center;
		y_lower_left = y_center - 1;
		if (y_missing < y_center) {
			/* missing square in lower right quadrant */
			// printf( "UL\n" );
			display(3, x_center, y_center);
			x_upper_right = x_center;
			y_upper_right = y_center;
			x_lower_right = x_missing;
			y_lower_right = y_missing;
		} else {
			display(4, x_center, y_center);
			x_upper_right = x_missing;
			y_upper_right = y_missing;
			x_lower_right = x_center;
			y_lower_right = y_center - 1;
		}
	}

	/* tile the four subboards */
	fillBoard(x_board, y_board + half_size, x_upper_left, y_upper_left,
						half_size);
	fillBoard(x_board + half_size, y_board + half_size, x_upper_right,
						y_upper_right, half_size);
	fillBoard(x_board + half_size, y_board, x_lower_right, y_lower_right,
						half_size);
	fillBoard(x_board, y_board, x_lower_left, y_lower_left, half_size);
}
/*int main(void)
{
				Triomino obj;
				return 0;
}*/

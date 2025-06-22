#include <iostream>
using namespace std;
void name(string& name1, string& name2)
{
	cout << "Enter name of 1st Player: ";
	cin >> name1;
	cout << endl;
	cout << "Enter name of 2nd Player: ";
	cin >> name2;
	cout << endl;
}
void board(char arr[5][5])
{
	for (int i = 0; i < 5; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 5; j++)
			{
				if (j == 1 || j == 3)
				{
					arr[i][j] = '|';
				}
				else
				{
					arr[i][j] = ' ';
				}
			}
		}
		else
		{
			for (int j = 0; j < 5; j++)
			{
				arr[i][j] = '-';
			}
		}
	}
}
void row_input(int& row)
{
	cout << endl;
	cout << "Enter row (1-3): ";
	cin >> row;
	while (true)
	{
		if (row < 1 || row > 3)
		{
			cout << "Invalid input, try again." << endl;
			cout << "Enter row again (1-3): ";
			cin >> row;

		}
		else
		{
			break;
		}
	}

	if (row == 1)
	{
		row = 0;
	}
	else if (row == 2)
	{
		row = 2;
	}
	else if (row == 3)
	{
		row = 4;
	}

}
void col_input(int& col)
{
	cout << "Enter column (1-3): ";
	cin >> col;
	while (true)
	{
		if (col < 1 || col > 3)
		{
			cout << "Invalid input, try again." << endl;
			cout << "Enter column again (1-3): ";
			cin >> col;
		}
		else
		{
			break;
		}
	}

	if (col == 1)
	{
		col = 0;
	}
	else if (col == 2)
	{
		col = 2;
	}
	else if (col == 3)
	{
		col = 4;
	}

}
void print(char arr[5][5])
{

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
	cout << endl;
}
void player1(char arr[5][5])
{
	int row = 0;
	int col = 0;
	cout << endl;
	row_input(row);
	col_input(col);
	cout << endl;
	if (arr[row][col] == ' ')
	{
		arr[row][col] = 'X';
	}
	else
	{
		while (arr[row][col] != ' ')
		{
			if (arr[row][col] == 'X')
			{
				cout << "You already occupied that space, try again." << endl;
				row_input(row);
				col_input(col);
			}
			else if (arr[row][col] == 'O')
			{
				cout << "Space is occupied by opponent, try again." << endl;
				row_input(row);
				col_input(col);
			}
		}
		arr[row][col] = 'X';
	}
}
void player2(char arr[5][5])
{
	int row = 0;
	int col = 0;
	cout << endl;
	row_input(row);
	col_input(col);
	cout << endl;
	if (arr[row][col] == ' ')
	{
		arr[row][col] = 'O';
	}
	else
	{
		while (arr[row][col] != ' ')
		{
			if (arr[row][col] == 'O')
			{
				cout << "You already occupied that space, try again." << endl;
				row_input(row);
				col_input(col);
			}
			else if (arr[row][col] == 'X')
			{
				cout << "Space is occupied by opponent, try again." << endl;
				row_input(row);
				col_input(col);
			}
		}
		arr[row][col] = 'O';
	}
}
bool end(char arr[5][5], bool check, string name1, string name2)
{
	if (arr[0][0] == 'X' && arr[0][2] == 'X' && arr[0][4] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[2][0] == 'X' && arr[2][2] == 'X' && arr[2][4] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[4][0] == 'X' && arr[4][2] == 'X' && arr[4][4] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][0] == 'X' && arr[2][2] == 'X' && arr[4][4] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][4] == 'X' && arr[2][2] == 'X' && arr[4][0] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][0] == 'X' && arr[2][0] == 'X' && arr[4][0] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][2] == 'X' && arr[2][2] == 'X' && arr[4][2] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][4] == 'X' && arr[2][4] == 'X' && arr[4][4] == 'X')
	{
		cout << name1 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][0] == 'O' && arr[0][2] == 'O' && arr[0][4] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else if (arr[2][0] == 'O' && arr[2][2] == 'O' && arr[2][4] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else if (arr[4][0] == 'O' && arr[4][2] == 'O' && arr[4][4] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][0] == 'O' && arr[2][2] == 'O' && arr[4][4] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][4] == 'O' && arr[2][2] == 'O' && arr[4][0] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][0] == 'O' && arr[2][0] == 'O' && arr[4][0] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][2] == 'O' && arr[2][2] == 'O' && arr[4][2] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else if (arr[0][4] == 'O' && arr[2][4] == 'O' && arr[4][4] == 'O')
	{
		cout << name2 << " won the match." << endl;
		check = true;
	}
	else
	{
		check = false;
	}

	return check;
}
bool draw(char arr[5][5])
{
	int count = 0;
	for (int i = 0; i < 5; i += 2)
	{
		for (int j = 0; j < 5; j += 2)
		{
			if (arr[i][j] == 'X' || arr[i][j] == 'O')
			{
				count++;
			}
		}
	}
	if (count == 9)
	{
		cout << "Neither player won the match, It's a draw." << endl;
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	cout << "TIC-TAC-TOE GAME: " << endl;
	cout << endl;
	string name1, name2;
	name(name1, name2);
	cout << "Symbol for " << name1 << ": X" << endl;
	cout << "Symbol for " << name2 << ": O" << endl;
	cout << endl;
	char game[5][5];

	board(game);
	print(game);

	cout << endl;

	bool win = false;
	while (true)
	{
		if (end(game, win, name1, name2))
		{
			break;
		}
		else if (draw(game))
		{
			break;
		}
		else
		{
			cout << name1 << "'s turn: " << endl;
			player1(game);
			cout << endl;
			print(game);
		}
		if (end(game, win, name1, name2))
		{
			break;
		}
		else if (draw(game))
		{
			break;
		}
		else
		{
			cout << name2 << "'s turn: " << endl;
			player2(game);
			cout << endl;
			print(game);
		}
	}
}
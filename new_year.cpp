#include <iostream>
#include <windows.h>
#define random(min, max) (min + rand()%(max-min+1))
using namespace std;
void showField(char** field) {
	int size1 = _msize(field) / sizeof(field[0]);
	int size2 = _msize(field[0]) / sizeof(field[0][0]);
	system("cls");
	for (int i = 0; i < size2; i++) {
		cout << i + 1 << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}
void resetField(char** field, char symbol) {
	int size1 = _msize(field) / sizeof(field[0]);
	int size2 = _msize(field[0]) / sizeof(field[0][0]);
	for (int i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			field[i][j] = symbol;
		}
	}
}
void playerTurn(char** field, int column, char player, char fill) {
	int size1 = _msize(field) / sizeof(field[0]);
	int size2 = _msize(field[0]) / sizeof(field[0][0]);
	field[0][column] = player;
	for (int i = 1; i < size1; i++) {
		showField(field);
		Sleep(150);
		if (field[i][column] == fill) swap(field[i - 1][column], field[i][column]);
	}
}
bool checkWin(char** field, char player) {
	int size1 = _msize(field) / sizeof(field[0]);
	int size2 = _msize(field[0]) / sizeof(field[0][0]);
	for (int count = 0, i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (field[i][j] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}

	for (int count = 0, i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			if (field[j][i] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}

	int displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = size1 - 1;
		while (true) {
			if ( ver < 0 || displacement + hor >= size2) {
				displacement++;
				break;
			}
			if (field[ver--][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = size1 - 2 + displacement;
		while (true) {
			if (ver < 0 || displacement + hor >= size2) {
				displacement--;
				break;
			}
			if (field[ver--][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = 0;
		while (true) {
			if (ver >= size1 || displacement + hor >= size2) {
				displacement++;
				break;
			}
			if (field[ver++][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = 1;
		while (true) {
			if (ver >= size1 || displacement + hor >= size2) {
				displacement--;
				break;
			}
			if (field[ver++][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}

	return 0;
}
bool checkBot(char** field,char checkSymb, char symb, char fill, int num) {
	int size1 = _msize(field) / sizeof(field[0]);
	int size2 = _msize(field[0]) / sizeof(field[0][0]);

	for (int count = 0, i = 0; i < size1; i++) {
		for (int j = 0; j < size2; j++) {
			if (field[i][j] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (j + 1 < size2) {
					if (field[i][j + 1] == fill) {
						playerTurn(field, j + 1, symb, fill);
						return 1;
					}
				}
				if (j - num >= 0) {
					if (field[i][j - num] == fill) {
						playerTurn(field, j - num, symb, fill);
						return 1;
					}
				}
			}
		}
	}

	for (int count = 0, i = 0; i < size2; i++) {
		for (int j = 0; j < size1; j++) {
			if (field[j][i] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (j - 1 >= 0) {
					if (field[j - 1][i] == fill) {
						playerTurn(field, i, symb, fill);
						return 1;
					}
				}
			}
		}
	}

	int displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = size1 - 1;
		while (true) {
			if (ver < 0 || displacement + hor >= size2) {
				displacement++;
				break;
			}
			if (field[ver--][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (displacement + hor + 1 < size2) {
					if (field[ver + 1][displacement + hor + 1] == fill) {
						playerTurn(field, displacement + hor + 1, symb, fill);
						return 1;
					}
				}
				if (displacement + hor - num >= 0 && ver - 3 >= 0) {
					if (field[ver - 3][displacement + hor - num] == fill) {
						playerTurn(field, displacement + hor - num, symb, fill);
						return 1;
					}
				}
			}
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = size1 - 2 + displacement;
		while (true) {
			if (ver < 0 || displacement + hor >= size2) {
				displacement--;
				break;
			}
			if (field[ver--][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (displacement + hor + 1 < size2) {
					if (field[ver + 1][displacement + hor + 1] == fill) {
						playerTurn(field, displacement + hor + 1, symb, fill);
						return 1;
					}
				}
				if (displacement + hor - num >= 0){
					if (field[ver - num][displacement + hor - num] == fill) {
						playerTurn(field, displacement + hor - num, symb, fill);
						return 1;
					}
				}
			}

		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = 0;
		while (true) {
			if (ver >= size1 || displacement + hor >= size2) {
				displacement++;
				break;
			}
			if (field[ver++][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (displacement + hor + 1 < size2) {
					if (field[ver + 1][displacement + hor + 1] == fill) {
						playerTurn(field, displacement + hor + 1, symb, fill);
						return 1;
					}
				}
				if (displacement + hor - num >= 0){
					if (field[ver - num][displacement + hor - num] == fill) {
						playerTurn(field, displacement + hor - num, symb, fill);
						return 1;
					}
				}
			}
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < size2; i++) {
		count = 0;
		hor = 0;
		ver = 1;
		while (true) {
			if (ver >= size1 || displacement + hor >= size2) {
				displacement--;
				break;
			}
			if (field[ver++][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (displacement + hor + 1 < size2 && ver + 1 < size1){
					if (field[ver + 1][displacement + hor + 1] == fill) {
						playerTurn(field, displacement + hor + num, symb, fill);
						return 1;
					}
				}
				if (displacement + hor - num >= 0 && ver - num >= 0) {
					if (field[ver - num][displacement + hor - num] == fill) {
						playerTurn(field, displacement + hor - num, symb, fill);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}
void botTurn(char** field, char bot, char player, char fill) {
	int size1 = _msize(field) / sizeof(field[0]);
	int size2 = _msize(field[0]) / sizeof(field[0][0]);
	if (checkBot(field, bot, bot, fill, 3)) return;
	else if (checkBot(field, player, bot, fill, 3)) return;
	else if (checkBot(field, bot, bot, fill, 2)) return;
	else if (checkBot(field, player, bot, fill, 2)) return;
	else if (checkBot(field, bot, bot, fill, 1)) return;
	else if (checkBot(field, player, bot, fill, 1)) return;
}
int main()
{
	setlocale(LC_ALL, "");
	int horizontal = 7;
	int vertical = 6;
	char player1 = 4;
	char player2 = 2;
	char fill = 206;
	int turn = 1;
	if (horizontal <= 4 || vertical <= 4) {
		cout << "Ошибка \nПоле слишком мало.";
	}
	else {
		char** field = new char* [vertical];
		for (int i = 0; i < vertical; i++) {
			field[i] = new char[horizontal];
		}
		int bot;
		do {
			system("cls");
			//char q;
			//for (int i = 0; i < 256; i++) {
			//	q = i;
			//	cout << i << "\t" << q << endl;
			//}
			cout << "Игра с ботом(1)\nИгра с игроком(0)\n";
			cin >> bot;
		} while (bot != 1 && bot != 0);
		resetField(field, fill);
		showField(field);
		int playerTurnColumn;
		while (true) {
			if (turn) {
				cout << "Ход игрока " << player1 << "\nВ какую колонку кинуть фишку?" << endl;
				cin >> playerTurnColumn;
				if (playerTurnColumn < 1 || playerTurnColumn > horizontal) continue;
				if (field[0][playerTurnColumn - 1] != fill) continue;
				playerTurn(field, playerTurnColumn - 1, player1, fill);
				showField(field);
				if (checkWin(field, player1)) {
					cout << "Победил игрок " << player1;
					break;
				}
				turn = 0;
			}
			else {
				if (bot) {
					botTurn(field, player2, player1, fill);
					showField(field);
					if (checkWin(field, player2)) {
						cout << "Победил бот";
						break;
					}
				}
				else {
					cout << "Ход игрока " << player2 << "\nВ какую колонку кинуть фишку?" << endl;
					cin >> playerTurnColumn;
					if (playerTurnColumn < 1 || playerTurnColumn > horizontal) continue;
					if (field[0][playerTurnColumn - 1] != fill) continue;
					playerTurn(field, playerTurnColumn - 1, player2, fill);
					showField(field);
					if (checkWin(field, player2)) {
						cout << "Победил игрок " << player2;
						break;
					}
				}
				turn = 1;
			}
		}
	}
}

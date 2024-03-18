#include <iostream>
#include <windows.h>
#define random(min, max) (min + rand()%(max-min+1))
using namespace std;
int HORIZONTAL = 7;
int VERTICAL = 6;
char PLAYER1 = 4;
char PLAYER2 = 2;
char FILL = 206;
void showField(char** field);
void resetField(char** field);
void playerTurn(char** field, int column, char player);
bool checkWin(char** field, char player);
bool checkBot(char** field, char checkSymb, int num);
void botTurn(char** field, char bot, char player, char fill);

void showField(char** field) {
	system("cls");
	for (int i = 0; i < HORIZONTAL; i++) {
		cout << i + 1 << " ";
	}
	cout << endl << endl;
	for (int i = 0; i < VERTICAL; i++) {
		for (int j = 0; j < HORIZONTAL; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}
void resetField(char** field) {
	for (int i = 0; i < VERTICAL; i++) {
		for (int j = 0; j < HORIZONTAL; j++) {
			field[i][j] = FILL;
		}
	}
}
void playerTurn(char** field, int column, char player) {
	field[0][column] = player;
	for (int i = 1; i < VERTICAL; i++) {
		showField(field);
		Sleep(150);
		if (field[i][column] == FILL) swap(field[i - 1][column], field[i][column]);
	}
}
bool checkWin(char** field, char player) {
	for (int count = 0, i = 0; i < VERTICAL; i++) {
		count = 0;
		for (int j = 0; j < HORIZONTAL; j++) {
			if (field[i][j] == player) count++;
			else count = 0;
			if (count == 4) {
				return 1;
			}
		}
	}

	for (int count = 0, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		for (int j = 0; j < VERTICAL; j++) {
			if (field[j][i] == player) count++;
			else count = 0;
			if (count == 4) {
				return 1;
			}
		}
	}

	int displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = VERTICAL - 1;
		while (true) {
			if (ver < 0 || displacement + hor >= HORIZONTAL) {
				displacement++;
				break;
			}
			if (field[ver--][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) {
				return 1;
			}
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = VERTICAL - 2 + displacement;
		while (true) {
			if (ver < 0 || displacement + hor >= HORIZONTAL) {
				displacement--;
				break;
			}
			if (field[ver--][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) {
				return 1;
			}
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = 0;
		while (true) {
			if (ver >= VERTICAL || displacement + hor >= HORIZONTAL) {
				displacement++;
				break;
			}
			if (field[ver++][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) {
				return 1;
			}
		}
	}

	displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = 1;
		while (true) {
			if (ver >= VERTICAL || displacement + hor >= HORIZONTAL) {
				displacement--;
				break;
			}
			if (field[ver++][displacement + hor++] == player) count++;
			else count = 0;
			if (count == 4) {
				return 1;
			}
		}
	}

	return 0;
}
bool checkBot(char** field, char checkSymb, int num) {
	//горизонтально-
	for (int count = 0, i = VERTICAL - 1; i >= 0; i--) {
		for (int j = 0; j < HORIZONTAL; j++) {
			if (field[i][j] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (j + 1 < HORIZONTAL) {
					if (i == VERTICAL - 1) {
						if (field[i][j + 1] == FILL) {
							if (field[i][j + 1] == FILL) {
								playerTurn(field, j + 1, PLAYER2);
								return 1;
							}
						}
					}
					else {
						if (field[i + 1][j + 1] == PLAYER2 || field[i + 1][j + 1] == PLAYER1){
							if (field[i][j + 1] == FILL) {
								playerTurn(field, j + 1, PLAYER2);
								return 1;
							}
						}
					}
				}
				if (j - num >= 0) {
					if (i == VERTICAL - 1) {
						if (field[i][j - num] == FILL) {
							playerTurn(field, j - num, PLAYER2);
							return 1;
						}
					}
					else {
						if (field[i + 1][j - num] == PLAYER2 || field[i + 1][j - num] == PLAYER1) {
							if (field[i][j - num] == FILL) {
								playerTurn(field, j - num, PLAYER2);
								return 1;
							}
						}
					}
				}
			}
		}
	}


	//вертикально|
	for (int count = 0, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		for (int j = 0; j < VERTICAL; j++) {
			if (field[j][i] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (j - num >= 0) {
					if (field[j - num][i] == FILL) {
						if (field[0][i] == FILL) {
							playerTurn(field, i, PLAYER2);
							return 1;
						}
					}
				}
			}
		}
	}


	//наискосок/1
	int displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = VERTICAL - 1;
		while (true) {
			if (ver < 0 || displacement + hor >= HORIZONTAL) {
				displacement++;
				break;
			}
			if (field[ver--][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (displacement + hor < HORIZONTAL) {
					if (field[ver + 1][displacement + hor] != FILL) {
						if (field[ver][displacement + hor] == FILL) {
							playerTurn(field, displacement + hor, PLAYER2);
							return 1;
						}
					}
				}
				if (displacement + hor - num - 1 >= 0 && ver - num - 1 >= 0) {
					if (field[ver - num - 1][displacement + hor] != FILL) {
						if (field[ver - num - 1][displacement + hor - num - 1] == FILL) {
							playerTurn(field, displacement + hor - num - 1, PLAYER2);
							return 1;
						}
					}
				}
			}
		}
	}


	//наискосок/2
	displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = VERTICAL - 2 + displacement;
		while (true) {
			if (ver < 0 || displacement + hor >= HORIZONTAL) {
				displacement--;
				break;
			}
			if (field[ver--][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (displacement + hor + 1 < HORIZONTAL) {
					if (field[ver][displacement + hor] == FILL) {
						if (field[ver + 1][displacement + hor] != FILL) {
							playerTurn(field, displacement + hor, PLAYER2);
							return 1;
						}
					}
				}
				if (displacement + hor - num >= 0) {
					if (field[ver + num + 1][displacement + hor - num - 1] == FILL) {
						if (field[ver + num + 2][displacement + hor - num - 1] != FILL) {
							playerTurn(field, displacement + hor - num - 1, PLAYER2);
							return 1;
						}
					}
				}
			}

		}
	}


	//наискосок\1
	displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = 0;
		while (true) {
			if (ver >= VERTICAL || displacement + hor >= HORIZONTAL) {
				displacement++;
				break;
			}
			if (field[ver++][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (ver < VERTICAL) {
					if (displacement + hor < HORIZONTAL) {
						if (field[ver][displacement + hor] == FILL) {
							if (field[ver + 1][displacement + hor] != FILL) {
								playerTurn(field, displacement + hor, PLAYER2);
								return 1;
							}
						}
					}
				}
				if (ver - num - 1 >= VERTICAL) {
					if (displacement + hor - num - 1 >= 0) {
						if (field[ver - num - 1][displacement + hor - num - 1] == FILL) {
							if (field[ver - num][displacement + hor - num - 1] != FILL) {
								playerTurn(field, displacement + hor - num - 1, PLAYER2);
								return 1;
							}
						}
					}
				}
			}
		}
	}


	//наискосок\2
	displacement = 0;
	for (int hor, ver, count, i = 0; i < HORIZONTAL; i++) {
		count = 0;
		hor = 0;
		ver = 1;
		while (true) {
			if (ver >= VERTICAL || displacement + hor >= HORIZONTAL) {
				displacement--;
				break;
			}
			if (field[ver++][displacement + hor++] == checkSymb) count++;
			else count = 0;
			if (count == num) {
				if (displacement + hor < HORIZONTAL && ver < VERTICAL) {
					if (field[ver][displacement + hor] == FILL) {
						if (ver + 1 < HORIZONTAL) {
							if (field[ver + 1][displacement + hor] != FILL) {
								playerTurn(field, displacement + hor, PLAYER2);
								return 1;
							}
						}
					}
				}
				if (displacement + hor - num - 1 >= 0 && ver - num - 1 >= 0) {
					if (field[ver - num - 1][displacement + hor - num - 1] == FILL) {
						if (field[ver - num][displacement + hor - num - 1] != FILL) {
							playerTurn(field, displacement + hor - num - 1, PLAYER2);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}
void botTurn(char** field, char bot, char player, char fill) {
	if (checkBot(field, bot, 3)) return;
	else if (checkBot(field, player, 3)) return;
	else if (checkBot(field, bot, 2)) return;
	else if (checkBot(field, player, 2)) return;
	else if (checkBot(field, bot, 1)) return;
	else if (checkBot(field, player, 1)) return;
}
int main()
{
	setlocale(LC_ALL, "");
	int turn = 1;
	int countTurn = 0;
	if (HORIZONTAL <= 4 || VERTICAL <= 4) {
		cout << "Ошибка \nПоле слишком мало.";
	}
	else {
		char** field = new char* [VERTICAL];
		for (int i = 0; i < VERTICAL; i++) {
			field[i] = new char[HORIZONTAL];
		}
		int bot;
		do {
			system("cls");
			cout << "Игра с ботом(1)\nИгра с игроком(0)\n";
			cin >> bot;
		} while (bot != 1 && bot != 0);
		resetField(field);
		showField(field);
		int playerTurnColumn;
		while (true) {
			if (turn) {
				cout << "Ход игрока " << PLAYER1 << "\nВ какую колонку кинуть фишку?" << endl;
				cin >> playerTurnColumn;
				if (playerTurnColumn < 1 || playerTurnColumn > HORIZONTAL) continue;
				if (field[0][playerTurnColumn - 1] != FILL) continue;
				playerTurn(field, playerTurnColumn - 1, PLAYER1);
				showField(field);
				if (checkWin(field, PLAYER1)) {
					cout << "Победил игрок " << PLAYER1;
					break;
				}
				if (countTurn++ == VERTICAL * HORIZONTAL) {
					cout << "Ничья";
					break;
				}
				turn = 0;
			}
			else {
				if (bot) {
					botTurn(field, PLAYER2, PLAYER1, FILL);
					showField(field);
					if (checkWin(field, PLAYER2)) {
						cout << "Победил бот";
						break;
					}
					if (countTurn++ == VERTICAL * HORIZONTAL) {
						cout << "Ничья";
						break;
					}
				}
				else {
					cout << "Ход игрока " << PLAYER2 << "\nВ какую колонку кинуть фишку?" << endl;
					cin >> playerTurnColumn;
					if (playerTurnColumn < 1 || playerTurnColumn > HORIZONTAL) continue;
					if (field[0][playerTurnColumn - 1] != FILL) continue;
					playerTurn(field, playerTurnColumn - 1, PLAYER2);
					showField(field);
					if (checkWin(field, PLAYER2)) {
						cout << "Победил игрок " << PLAYER2;
						break;
					}
					if (countTurn++ == VERTICAL * HORIZONTAL) {
						cout << "Ничья";
						break;
					}
				}
				turn = 1;
			}
		}
	}
}

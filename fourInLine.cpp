#include <iostream>
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
		if (field[i][column] == fill) swap(field[i - 1][column], field[i][column]);
	}
}

void botTurn(char** field, char bot, char fill) {
	int size1 = _msize(field) / sizeof(field[0]);
	int size2 = _msize(field[0]) / sizeof(field[0][0]);
	int column = random(0, size2 - 1);
	field[0][column] = bot;
	for (int i = 1; i < size1; i++) {
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











	for (int e = 0, count = 0, i = 0; i < size2; i++) {
		int w = 0;
		int q = size1 - 4;
		for (int j = 0; j < size1; j++) {
			if ( q < 0 || e + w > size2) {
				e++;
				break;
			}
			if (field[q--][e+w++] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}
	for (int e = 0, count = 0, i = 0; i < size2; i++) {
		int w = 0;
		int q = 4;
		for (int j = 0; j < size1; j++) {
			if (q >= size1 || e + w >= size2) {
				e++;
				break;
			}
			if (field[q++][e + w++] == player) count++;
			else count = 0;
			if (count == 4) return 1;
		}
	}
	return 0;
}
int main()
{
	setlocale(LC_ALL, "");
	int horizontal = 9;
	int vertical = 9;
	char player1 = 4;
	char player2 = 15;
	char fill = 25;
	char** field = new char* [vertical];
	for (int i = 0; i < vertical; i++) {
		field[i] = new char[horizontal];
	}
	int bot;
	 do{
		system("cls");
		cout << "Игра с ботом(1)\nИгра с игроком(0)\n";
		cin >> bot;
	 } while (bot != 1 && bot != 0);
	resetField(field, fill);
	showField(field);
	int playerTurnColumn;
	while (true){
		showField(field);
		
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
		cout << "Ход игрока " << player2 << "\nВ какую колонку кинуть фишку?" << endl;
		cin >> playerTurnColumn;
		if (playerTurnColumn < 1 || playerTurnColumn > horizontal) continue;
		if (field[0][playerTurnColumn - 1] != fill) continue;
		if (bot) {

		}
		else {
			playerTurn(field, playerTurnColumn - 1, player2, fill);
			if (checkWin(field, player2)) {
				cout << "Победил игрок " << player2;
				break;
			}
		}












	}
}
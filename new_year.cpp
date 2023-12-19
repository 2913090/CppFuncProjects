#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));
    /*  cout << "Злобные гномы заминировали огород санты.\n";
      system("pause > nul");
      cout << "Вам необходимо разминировать поле\n";
      system("pause > nul");
      cout << "У вас 3 жизни. Удачи!";
      system("pause > nul");

      system("cls");*/

    const int SIZE = 4;
    char field[SIZE][SIZE] = {};
    char showField[SIZE][SIZE] = {};
    for (int i = 0, k = 1; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE; j++) {
            field[i][j] = k + 48;
            if (j % 2) k++;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        field[SIZE - 1][i] = '¤';
    }
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            swap(field[i][j], field[rand() % SIZE][rand() % SIZE]);
        }
    }

    cout << "  a b c d" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < SIZE; j++) {
            cout << field[i][j] << " ";
        }
        cout << endl;
    }

    cout << "  a b c d" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << " ";
        for (int j = 0; j < SIZE; j++) {
            showField[i][j] = '?';
            cout << showField[i][j] << " ";
        }
        cout << endl;
    }

    char x, y;
    int prevX, prevY;
    int count = SIZE * SIZE;
    int openPare = 0;
    while (count > 0) {
        while (true) {
            system("cls");
            cout << "  a b c d" << endl;
            for (int i = 0; i < SIZE; i++) {
                cout << i + 1 << " ";
                for (int j = 0; j < SIZE; j++) {
                    cout << showField[i][j] << " ";
                }
                cout << endl;
            }

            cout << "введите букву координаты: ";
            cin >> x;
            if (x < 'a' || x>'d') {
                cout << "некорректная координата" << endl;
                continue;
            }
            cout << "введите цифру координаты: ";
            cin >> y;
            if (y < '1' || y>'4') {
                cout << "некорректная координата" << endl;
                continue;
            }
            if (showField[y - 49][x - 97] != '?') continue;
            break;
        }

        openPare++;
        showField[y - 49][x - 97] = field[y - 49][x - 97];
        count--;
        if (openPare > 1) {
            if (showField[y - 49][x - 97] != (showField[prevY][prevX])) {
                system("cls");
                cout << "  a b c d" << endl;
                for (int i = 0; i < SIZE; i++) {
                    cout << i + 1 << " ";
                    for (int j = 0; j < SIZE; j++) {
                        cout << showField[i][j] << " ";
                    }
                    cout << endl;
                }
                Sleep(2000);
                showField[y - 49][x - 97] = '?';
                showField[prevY][prevX] = '?';
                count += 2;
            }
            openPare = 0;
        }
        else {
            prevX = x - 97;
            prevY = y - 49;
        }

    }
}

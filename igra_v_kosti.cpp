#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    srand(time(NULL));
    int igrok1, igrok2, igrokpobed=0, igrokhod, komp1, komp2, komppobed=0, komphod;
    for (; igrokpobed < 3 && komppobed < 3;) {
        system("pause");
        system("cls");
        igrok1 = 1 + rand() % 6;
        igrok2 = 1 + rand() % 6;
        cout << "Вам выпало " << igrok1 << " и " << igrok2;
        igrokhod = igrok1 + igrok2;
        if (igrok1 == igrok2) {
            cout << " дубль: результат умножается на 2.\n";
            igrokhod *= 2;
        }
        else cout << "\n";
        komp1 = 1 + rand() % 6;
        komp2 = 1 + rand() % 6;
        cout << "Ход компьютера\nЕму выпало " << komp1 << " и " << komp2;
        komphod = komp1 + komp2;
        if (komp1 == komp2) {
            cout << " дубль: результат умножается на 2.\n";
            komphod *= 2;
        }
        else cout << "\n";
        cout << "Итого ";
        if (komphod == igrokhod) cout << "ничья\n";
        else if (komphod > igrokhod) {
            cout << "победил компьютер\n";
            komppobed++;
        }
        else if (komphod < igrokhod) {
            cout << "победил игрок\n";
            igrokpobed++;
        }
        cout << "Счет   " << igrokpobed << ":" << komppobed << "\n";
    }
}
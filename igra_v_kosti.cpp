#include <iostream>
using namespace std;

int main()
{
    ///*
    //1. Вывести все целые числа от 1 до 10 через пробел
    //*/
    //int a1 = 1;
    //while (a1 <= 10) cout << a1++ << " ";

    ///*
    //2. Вывести все целые числа от a до b
    //(a и b вводит пользователь)
    //в порядке убывания
    //*/
    //int a2, b2;
    //cin >> a2 >> b2;
    //if (a2 > b2) swap(a2, b2);
    //while (b2 >= a2) cout << b2-- << " ";

    ///*
    //3. Пользователь вводит числа до тех пор, пока не введет 0.
    //После этого вывести сумму введенных ранее чисел.
    //*/
    //int a3, summa = 0;

    //while (true) {
    //    cin >> a3;
    //    if (a3 == 0) {
    //        cout << summa;
    //        break;
    //    }
    //    summa += a3;
    //}

    ///*
    //4. Пользователь вводит числа до тех пор, пока не введет 0.
    //После этого вывести наименьшее из введенных чисел.
    //*/
    //int a4, min;
    //cin >> a4;
    //min = a4;

    //while (a4 != 0) {
    //    if (min > a4) min = a4;
    //    cin >> a4;
    //}
    //cout << min;




    /*for (int q = 5; q <= 10; q++) cout << q << " ";*/

    //int sum=0;
    //for (int q = 10; q <= 20; q++) sum += q;
    //cout << sum;

    //int a, b, min, max;
    //cin >> a >> b;
    //if (a > b) swap(a, b);
    //min = b;
    //max = a;
    //srand(time(NULL));
    //for (int w, q = 0; q <= 10; q++) {
    //    w = a + rand() % (b + 1 - a);
    //    cout << w << " ";
    //    if (w > max) max = w;
    //    if (w < min) min = w;
    //}
    //cout << "\nmin-" << min << "\nmax-" << max;



    //float a, b;
    //cin >> a >> b;
    //if (a > b) swap(a, b);
    //for (float q = a; q <= b; q += 0.5) cout << q << " ";



    //int a, b;
    //cin >> a >> b;
    //if (a > b) swap(a, b);
    //for (int q = b; q >= a; q--) cout << q << " ";



    setlocale(LC_ALL, "");
    srand(time(NULL));
    int igrok1, igrok2, igrokpobed=0, igrokhod, komp1, komp2, komppobed=0, komphod;
    for (; igrokpobed < 3 && komppobed < 3;) {
        system("pause");
        igrok1 = 1 + rand() % (6);
        igrok2 = 1 + rand() % (6);
        cout << "Вам выпало " << igrok1 << " и " << igrok2;
        igrokhod = igrok1 + igrok2;
        if (igrok1 == igrok2) {
            cout << " дубль: результат умножается на 2.\n";
            igrokhod *= 2;
        }
        else cout << "\n";
        komp1 = 1 + rand() % (6);
        komp2 = 1 + rand() % (6);
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
            komppobed += 1;
        }
        else if (komphod < igrokhod) {
            cout << "победил игрок\n";
            igrokpobed += 1;
        }
        cout << "Счет   " << igrokpobed << ":" << komppobed << "\n";
    }
}

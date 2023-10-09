#include <iostream>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "");
    short vir, y;
    char Q, W, Op;
    cout << "\tКоличество значений(2, 3, 4) - ";
    cin >> vir;
    if (vir == 2) {
        y = 4;
        short chislo1[4]{ 0,0,1,1 }, chislo2[4]{ 0,1,0,1 }, deystv1[4], deystv2[4], deystv3[4], deystv4[4], deystv5[4], deystv[4];
        cout << "\tA | B\n";
        cout << "\t_____\n";
        for (int i = 0; i < y; i++)
            cout << "\t" << chislo1[i] << " | " << chislo2[i] << "\n";
        for (int p = 1; p <= 6; p++) {
            cout << "\tВведите первое значение (A/B/1/2/3/4): ";
            cin >> Q;
            cout << "\tВведите логическую операцию (отрицание-1, конъюнкция-2, дизъюнкция-3, \n\tимпликация-4, эквиваленция-5, исключающая дизъюнкция-6, стрелка Пирса-7): ";
            cin >> Op;
            if (Op == '1') {
                if (Q == 'A') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == 'B') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '1') {
                    switch (p) {
                    case 2:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '2') {
                    switch (p) {
                    case 3:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '3') {
                    switch (p) {
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '4') {
                    for (int i = 0; i < y; i++)
                        (deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    break;
                }
            }
            else {
                cout << "\tВведите второе значение (A/B/1/2/3/4): ";
                cin >> W;
            }
            if (Op == '2') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo2[i];
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = deystv1[i];
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv2[i];
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv3[i];
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv3[i];
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv4[i];
                            break;
                        }
                    }
                    break;
                }
            }
            else if (Op == '3') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < 4; i++)
                                deystv1[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < 4; i++)
                                deystv1[i] = chislo2[i];
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < 4; i++)
                                deystv2[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < 4; i++)
                                deystv2[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < 4; i++)
                                deystv2[i] = deystv1[i];
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < 4; i++)
                                deystv3[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < 4; i++)
                                deystv3[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < 4; i++)
                                deystv3[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < 4; i++)
                                deystv3[i] = deystv2[i];
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < 4; i++)
                                deystv4[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < 4; i++)
                                deystv4[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < 4; i++)
                                deystv4[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < 4; i++)
                                deystv4[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < 4; i++)
                                deystv4[i] = deystv3[i];
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < 4; i++)
                                deystv5[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < 4; i++)
                                deystv5[i] = chislo2[i];
                            break;
                        case '1':
                            for (int i = 0; i < 4; i++)
                                deystv5[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < 4; i++)
                                deystv5[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < 4; i++)
                                deystv5[i] = deystv3[i];
                            break;
                        case '4':
                            for (int i = 0; i < 4; i++)
                                deystv5[i] = deystv4[i];
                            break;
                        }
                    }
                    break;
                }
            }
            else if (Op == '4') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv1[i] = 1;
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv2[i] = 1;
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv3[i] = 1;
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv4[i] = 1;
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }

                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv5[i] = 1;
                    }
                    break;


                }
            }
            else if (Op == '5') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == chislo2[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv1[i] = 1;
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == chislo2[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv2[i] = 1;
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == chislo2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv3[i] = 1;
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == chislo2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv4[i] = 1;
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv5[i] = 1;
                        break;
                    }
                }
            }
            else if (Op == '6') {
            switch (p) {
            case 1:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < 4; i++)
                        (chislo1[i] == chislo2[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < 4; i++)
                        deystv1[i] = 1;
                }
                break;
            case 2:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv2[i] = 0;
                }
                break;
            case 3:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv3[i] = 0;
                }
                break;
            case 4:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv4[i] = 0;
                }
                break;
            case 5:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                    for (int i = 0; i < y; i++)
                        (deystv3[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv5[i] = 0;
                    break;
                }
            }
            }
            else if (Op == '7') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                (deystv3[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                (deystv3[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                (deystv4[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        }
                    }
                    break;
                }
            }
            if (p == 1) {
                cout << "\tA | B | 1\n";
                cout << "\t_________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << deystv1[i] << "\n";
            }
            else if (p == 2) {
                cout << "\tA | B | 1 | 2\n";
                cout << "\t_____________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << deystv1[i] << " | " << deystv2[i] << "\n";
            }
            else if (p == 3) {
                cout << "\tA | B | 1 | 2 | 3\n";
                cout << "\t_________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << "\n";
            }
            else if (p == 4) {
                cout << "\tA | B | 1 | 2 | 3 | 4\n";
                cout << "\t_____________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << " | " << deystv4[i] << "\n";
            }
            else if (p == 5) {
                cout << "\tA | B | 1 | 2 | 3 | 4 | 5\n";
                cout << "\t_________________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << " | " << deystv4[i] << " | " << deystv5[i] << "\n";
            }
        }
    }
    else if (vir == 3) {
        y = 8;
        short chislo1[8]{ 0,0,0,0,1,1,1,1 }, chislo2[8]{ 0,0,1,1,0,0,1,1 }, chislo3[8]{ 0,1,0,1,0,1,0,1 }, deystv1[8], deystv2[8], deystv3[8], deystv4[8], deystv5[8], deystv[4];
        cout << "\tA | B | C\n";
        cout << "\t_________\n";
        for (int i = 0; i < y; i++)
            cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << "\n";
        for (int p = 1; p <= 6; p++) {
            cout << "\tВведите первое значение (A/B/C/1/2/3/4): ";
            cin >> Q;
            cout << "\tВведите логическую операцию (отрицание-1, конъюнкция-2, дизъюнкция-3, \n\tимпликация-4, эквиваленция-5, исключающая дизъюнкция-6, стрелка Пирса-7): ";
            cin >> Op;
            if (Op == '1') {
                if (Q == 'A') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == 'B') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == 'C') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '1') {
                    switch (p) {
                    case 2:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '2') {
                    switch (p) {
                    case 3:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '3') {
                    switch (p) {
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '4') {
                    for (int i = 0; i < y; i++)
                        (deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    break;
                }
            }
            else {
                cout << "\tВведите второе значение (A/B/C/1/2/3/4): ";
                cin >> W;
            }
            if (Op == '2') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo3[i];
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = deystv1[i];
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv2[i];
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv3[i];
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv3[i];
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv4[i];
                            break;
                        }
                    }
                    break;
                }
            }
            else if (Op == '3') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo3[i];
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = deystv1[i];
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv2[i];
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv3[i];
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo3[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv3[i];
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv4[i];
                            break;
                        }
                    }
                    break;
                }
            }
            else if (Op == '4') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv1[i] = 1;
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv2[i] = 1;
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv3[i] = 1;
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv4[i] = 1;
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }

                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv5[i] = 1;
                    }
                    break;


                }
            }
            else if (Op == '5') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv1[i] = 1;
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv2[i] = 1;
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv3[i] = 1;
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv4[i] = 1;
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv5[i] = 1;
                        break;
                    }
                }
            }
            else if (Op == '6') {
            switch (p) {
            case 1:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                }
                else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo3[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                }
                else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == chislo3[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv1[i] = 0;
                }
                break;
            case 2:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo3[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == chislo3[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv2[i] = 0;
                }
                break;
            case 3:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo3[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == chislo3[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv3[i] = 0;
                }
                break;
            case 4:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == chislo3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv4[i] = 0;
                }
                break;
            case 5:
                if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == chislo3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == chislo3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                    for (int i = 0; i < y; i++)
                        (chislo1[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                    for (int i = 0; i < y; i++)
                        (chislo2[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                    for (int i = 0; i < y; i++)
                        (chislo3[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                    for (int i = 0; i < y; i++)
                        (deystv1[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                    for (int i = 0; i < y; i++)
                        (deystv2[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                    for (int i = 0; i < y; i++)
                        (deystv3[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                }
                else if (Q == W) {
                    for (int i = 0; i < y; i++)
                        deystv5[i] = 0;
                    break;
                }
            }
            }
            else if (Op == '7') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                (deystv3[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                (deystv4[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        }
                    }
                    break;
                }
            }
            if (p == 1) {
                cout << "\tA | B | C | 1\n";
                cout << "\t_____________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << deystv1[i] << "\n";
            }
            else if (p == 2) {
                cout << "\tA | B | C | 1 | 2\n";
                cout << "\t_________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << deystv1[i] << " | " << deystv2[i] << "\n";
            }
            else if (p == 3) {
                cout << "\tA | B | C | 1 | 2 | 3\n";
                cout << "\t_____________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << "\n";
            }
            else if (p == 4) {
                cout << "\tA | B | C | 1 | 2 | 3 | 4\n";
                cout << "\t_________________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << " | " << deystv4[i] << "\n";
            }
            else if (p == 5) {
                cout << "\tA | B | C | 1 | 2 | 3 | 4 | 5\n";
                cout << "\t_____________________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << " | " << deystv4[i] << " | " << deystv5[i] << "\n";
            }
        }
    }
    else if (vir == 4) {
        y = 16;
        short chislo1[16]{ 0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1 }, chislo2[16]{ 0,0,0,0,1,1,1,1,0,0,0,0,1,1,1,1 }, chislo3[16]{ 0,0,1,1,0,0,1,1,0,0,1,1,0,0,1,1 }, chislo4[16]{ 0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1 }, deystv1[16], deystv2[16], deystv3[16], deystv4[16], deystv5[16], deystv[16];
        cout << "\tA | B | C | D\n";
        cout << "\t_____________\n";
        for (int i = 0; i < y; i++)
            cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << chislo4[i] << "\n";
        for (int p = 1; p <= 6; p++) {
            cout << "\tВведите первое значение (A/B/C/D/1/2/3/4): ";
            cin >> Q;
            cout << "\tВведите логическую операцию (отрицание-1, конъюнкция-2, дизъюнкция-3, \n\tимпликация-4, эквиваленция-5, исключающая дизъюнкция-6, стрелка Пирса-7): ";
            cin >> Op;
            if (Op == '1') {
                if (Q == 'A') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == 'B') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == 'C') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == 'D') {
                    switch (p) {
                    case 1:
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                        break;
                    case 2:
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '1') {
                    switch (p) {
                    case 2:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    case 3:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '2') {
                    switch (p) {
                    case 3:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                        break;
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '3') {
                    switch (p) {
                    case 4:
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                        break;
                    case 5:
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                        break;
                    }
                }
                else if (Q == '4') {
                    for (int i = 0; i < y; i++)
                        (deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    break;
                }
            }
            else {
                cout << "\tВведите второе значение (A/B/C/D/1/2/3/4): ";
                cin >> W;
            }
            if (Op == '2') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 1) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo4[i];
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv1[i] == 1) ? deystv2[i] = 1 : deystv2[i] = 0;
                        break;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = deystv1[i];
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv1[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv2[i];
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv1[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 1) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv3[i];
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv1[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '4' || Q == '4' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '2') {
                    for (int i = 0; i < y; i++)
                        (deystv3[i] == 1 && deystv4[i] == 1) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv3[i];
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv4[i];
                            break;
                        }
                    }
                    break;
                }
            }
            else if (Op == '3') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv1[i] = chislo4[i];
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv2[i] = deystv1[i];
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv3[i] = deystv2[i];
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv4[i] = deystv3[i];
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '4' || Q == '4' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo1[i];
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo2[i];
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo3[i];
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = chislo4[i];
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv1[i];
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv2[i];
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv3[i];
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                deystv5[i] = deystv4[i];
                            break;
                        }
                    }
                    break;
                }
            }
            else if (Op == '4') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo1[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo2[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo3[i] == 0) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv1[i] = 1;
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'D' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv1[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo4[i] == 0) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv2[i] = 1;
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo3[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo4[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv3[i] = 1;
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && chislo1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && chislo2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && chislo3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && chislo4[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && deystv1[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 1 && deystv3[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 1 && deystv2[i] == 0) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv4[i] = 1;
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (chislo4[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (chislo4[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (chislo4[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (chislo4[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == 'D') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (chislo4[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == 'D') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (chislo4[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == 'D') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo1[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'A') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo2[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'B') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo3[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'C') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (chislo4[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == 'D') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && chislo4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv1[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '1') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv1[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv2[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '2') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv2[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '4') {
                        for (int i = 0; i < 4; i++)
                            (deystv3[i] == 1 && deystv4[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '4' && W == '3') {
                        for (int i = 0; i < 4; i++)
                            (deystv4[i] == 1 && deystv3[i] == 0) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }

                    else if (Q == W) {
                        for (int i = 0; i < 4; i++)
                            deystv5[i] = 1;
                    }
                    break;


                }
            }
            else if (Op == '5') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv1[i] = 1;
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv2[i] = 1 : deystv2[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv2[i] = 1;
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv2[i]) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv3[i] = 1;
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv2[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv3[i]) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv4[i] = 1;
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv2[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv3[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '4' || Q == '4' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == deystv4[i]) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv5[i] = 1;
                        break;
                    }
                }
            }
            else if (Op == '6') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv1[i] = 0 : deystv1[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv1[i] = 0;
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv2[i] = 0 : deystv2[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv2[i] = 0;
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv2[i]) ? deystv3[i] = 0 : deystv3[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv3[i] = 0;
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv2[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv3[i]) ? deystv4[i] = 0 : deystv4[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv4[i] = 0;
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == chislo4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == chislo4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == chislo4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv1[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv2[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv3[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == 'D' && W == '4' || Q == '4' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '3') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == deystv4[i]) ? deystv5[i] = 0 : deystv5[i] = 1;
                    }
                    else if (Q == W) {
                        for (int i = 0; i < y; i++)
                            deystv5[i] = 0;
                        break;
                    }
                }
            }
            else if (Op == '7') {
                switch (p) {
                case 1:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                (chislo4[i] == 0 && chislo4[i] == 0) ? deystv1[i] = 1 : deystv1[i] = 0;
                            break;
                        }
                    }
                    break;
                case 2:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                    break;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                (chislo4[i] == 0 && chislo4[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv2[i] = 1 : deystv2[i] = 0;
                            break;
                        }
                    }
                    break;
                case 3:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                (chislo4[i] == 0 && chislo4[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv3[i] = 1 : deystv3[i] = 0;
                            break;
                        }
                    }
                    break;
                case 4:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                (chislo4[i] == 0 && chislo4[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                (deystv3[i] == 0 && deystv3[i] == 0) ? deystv4[i] = 1 : deystv4[i] = 0;
                            break;
                        }
                    }
                    break;
                case 5:
                    if (Q == 'A' && W == 'B' || Q == 'B' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'C' || Q == 'C' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'C' || Q == 'C' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == 'D' || Q == 'D' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && chislo4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == 'D' || Q == 'D' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && chislo4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == 'D' || Q == 'D' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && chislo4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '1' || Q == '1' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '1' || Q == '1' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '1' || Q == '1' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '1' || Q == '1' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '2' || Q == '2' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '2' || Q == '2' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '2' || Q == '2' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '2' || Q == '2' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '2' || Q == '2' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '3' || Q == '3' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '3' || Q == '3' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '3' || Q == '3' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '3' || Q == '3' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '3' || Q == '3' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '3' || Q == '3' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'A' && W == '4' || Q == '4' && W == 'A') {
                        for (int i = 0; i < y; i++)
                            (chislo1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'B' && W == '4' || Q == '4' && W == 'B') {
                        for (int i = 0; i < y; i++)
                            (chislo2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'C' && W == '4' || Q == '4' && W == 'C') {
                        for (int i = 0; i < y; i++)
                            (chislo3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == 'D' && W == '4' || Q == '4' && W == 'D') {
                        for (int i = 0; i < y; i++)
                            (chislo4[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '1' && W == '4' || Q == '4' && W == '1') {
                        for (int i = 0; i < y; i++)
                            (deystv1[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '2' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv2[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == '3' && W == '4' || Q == '4' && W == '2') {
                        for (int i = 0; i < y; i++)
                            (deystv3[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                    }
                    else if (Q == W) {
                        switch (Q) {
                        case 'A':
                            for (int i = 0; i < y; i++)
                                (chislo1[i] == 0 && chislo1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case 'B':
                            for (int i = 0; i < y; i++)
                                (chislo2[i] == 0 && chislo2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case 'C':
                            for (int i = 0; i < y; i++)
                                (chislo3[i] == 0 && chislo3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case 'D':
                            for (int i = 0; i < y; i++)
                                (chislo4[i] == 0 && chislo4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '1':
                            for (int i = 0; i < y; i++)
                                (deystv1[i] == 0 && deystv1[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '2':
                            for (int i = 0; i < y; i++)
                                (deystv2[i] == 0 && deystv2[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '3':
                            for (int i = 0; i < y; i++)
                                (deystv3[i] == 0 && deystv3[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        case '4':
                            for (int i = 0; i < y; i++)
                                (deystv4[i] == 0 && deystv4[i] == 0) ? deystv5[i] = 1 : deystv5[i] = 0;
                            break;
                        }
                    }
                    break;
                }
            }
            if (p == 1) {
                cout << "\tA | B | C | D | 1\n";
                cout << "\t_________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << chislo4[i] << " | " << deystv1[i] << "\n";
            }
            else if (p == 2) {
                cout << "\tA | B | C | D | 1 | 2\n";
                cout << "\t_____________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << chislo4[i] << " | " << deystv1[i] << " | " << deystv2[i] << "\n";
            }
            else if (p == 3) {
                cout << "\tA | B | C | D | 1 | 2 | 3\n";
                cout << "\t_________________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << chislo4[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << "\n";
            }
            else if (p == 4) {
                cout << "\tA | B | C | D | 1 | 2 | 3 | 4\n";
                cout << "\t_____________________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << chislo4[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << " | " << deystv4[i] << "\n";
            }
            else if (p == 5) {
                cout << "\tA | B | C | D | 1 | 2 | 3 | 4 | 5\n";
                cout << "\t_________________________________\n";
                for (int i = 0; i < y; i++)
                    cout << "\t" << chislo1[i] << " | " << chislo2[i] << " | " << chislo3[i] << " | " << chislo4[i] << " | " << deystv1[i] << " | " << deystv2[i] << " | " << deystv3[i] << " | " << deystv4[i] << " | " << deystv5[i] << "\n";
            }
        }
    }
}

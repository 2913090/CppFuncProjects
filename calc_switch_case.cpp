#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    float q, w;
    char e;
    cout << "Введите 1-е число\n";
    cin >> q;
    cout << "Введите 2-е число\n";
    cin >> w;
    cout << "Введите действие(+,-,*,/)\n";
    cin >> e;
    cout << q << e << w << "=";
    switch (e) {
    case '*':
        cout << q * w;
        break;
    case '+':
        cout << q + w;
        break;
    case '-':
        cout << q - w;
        break;
    case '/':
        if (w == 0)
            cout << "Ошибка (на 0 делить нельзя)";
        else
            cout << q / w;
    default:
        cout << "Введенные данные не корректны";
        break;
    }
}

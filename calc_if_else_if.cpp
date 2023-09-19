#include <iostream>
int main()
{
    using namespace std;
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
    if (e == '/') {
        if (w == 0)
            cout << "Ошибка (на 0 делить нельзя)";
        else
            cout << q / w;
    }
    else if (e == '*') 
        cout << q * w;
    else if (e == '+')
        cout << q + w;
    else if (e == '-')
        cout << q - w;
    else 
        cout << "Введенные данные не корректны";
}
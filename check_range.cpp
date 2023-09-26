#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int q,w,e;
    cout << "Введите цифру\n";
    cin >> q;
    cout << "Введите нижнюю границу диапозона\n";
    cin >> w;
    cout << "Введите верхнюю границу диапозона\n";
    cin >> e;
    if (w > e) 
        swap(w, e);
    (q >= w && q <= e) ? cout << "Введенное значение лежит между " << w << " и " << e : cout << "Введенное значение не лежит между " << w << " и " << e;

}
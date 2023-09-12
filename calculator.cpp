// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    //int a1 = INT32_MAX;
    //int a2 = INT32_MIN;
    //long long a3 = LLONG_MAX;
    //long long a4 = LLONG_MIN;
    //short a5 = SHRT_MAX;
    //short a6 = SHRT_MIN;
    //unsigned int a7 = UINT_MAX;
    //unsigned int a8 = 0;
    //unsigned long long a9 = ULLONG_MAX;
    //unsigned long long a10 = 0;
    //unsigned short a11 = USHRT_MAX;
    //unsigned short a12 = 0;
    //float a13 = FLT_MAX;
    //float a14 = FLT_MIN;
    //double a15 = DBL_MAX;
    //double a16 = DBL_MIN;
    //char a17 = 255;
    //char a18 = 0;
    //bool a19= 1;
    //bool a20 = 0;
    //cout << "|тип\t\t\t|память\t|мин\t\t\t|макс\t\t\t|\n";
    //cout << "|int\t\t\t|"<<sizeof(a1)<<" Байт\t|"<<a2<<"\t\t|"<<a1<<"\t\t|\n";
    //cout << "|long long\t\t|" << sizeof(a3) << " Байт\t|" << a4 << "\t|" << a3 << "\t|\n";
    //cout << "|short\t\t\t|" << sizeof(a5) << " Байт\t|" << a6 << "\t\t\t|" << a5 << "\t\t\t|\n";
    //cout << "|unsigned int\t\t|" << sizeof(a7) << " Байт\t|" << a8 << "\t\t\t|" << a7 << "\t\t|\n";
    //cout << "|unsigned long long\t|" << sizeof(a9) << " Байт\t|" << a10 << "\t\t\t|" << a9 << "\t|\n";
    //cout << "|unsigned short\t\t|" << sizeof(a11) << " Байт\t|" << a12 << "\t\t\t|" << a11 << "\t\t\t|\n";
    //cout << "|float\t\t\t|" << sizeof(a13) << " Байт\t|" << a14 << "\t\t|" << a13 << "\t\t|\n";
    //cout << "|double\t\t\t|" << sizeof(a15) << " Байт\t|" << a16 << "\t\t|" << a15 << "\t\t|\n";
    //cout << "|char\t\t\t|" << sizeof(a17) << " Байт\t|" << a18 << "\t\t\t|" << a17 << "\t\t\t|\n";
    //cout << "|bool\t\t\t|" << sizeof(a19) << " Байт\t|" << a20 << "\t\t\t|" << a19 << "\t\t\t|\n";
    int a, b;
    cout <<"input a:";
    cin >> a;
    cout << "input b:";
    cin >> b;
    cout << a << "+" << b << "=" << a + b << "\n";
    cout << a << "-" << b << "=" << a - b << "\n";
    cout << a << "/" << b << "=" << a / b << "\n";
    cout << a << "*" << b << "=" << a * b << "\n";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

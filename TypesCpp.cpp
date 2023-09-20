#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    int a1 = INT32_MAX;
    int a2 = INT32_MIN;
    long long a3 = LLONG_MAX;
    long long a4 = LLONG_MIN;
    short a5 = SHRT_MAX;
    short a6 = SHRT_MIN;
    unsigned int a7 = UINT_MAX;
    unsigned int a8 = 0;
    unsigned long long a9 = ULLONG_MAX;
    unsigned long long a10 = 0;
    unsigned short a11 = USHRT_MAX;
    unsigned short a12 = 0;
    float a13 = FLT_MAX;
    float a14 = FLT_MIN;
    double a15 = DBL_MAX;
    double a16 = DBL_MIN;
    char a17 = 255;
    char a18 = 0;
    bool a19= 1;
    bool a20 = 0;


    cout << "|тип\t\t\t|память\t|мин\t\t\t|макс\t\t\t|\n";
    cout << "|int\t\t\t|"<<sizeof(a1)<<" Байт\t|"<<a2<<"\t\t|"<<a1<<"\t\t|\n";
    cout << "|long long\t\t|" << sizeof(a3) << " Байт\t|" << a4 << "\t|" << a3 << "\t|\n";
    cout << "|short\t\t\t|" << sizeof(a5) << " Байт\t|" << a6 << "\t\t\t|" << a5 << "\t\t\t|\n";
    cout << "|unsigned int\t\t|" << sizeof(a7) << " Байт\t|" << a8 << "\t\t\t|" << a7 << "\t\t|\n";
    cout << "|unsigned long long\t|" << sizeof(a9) << " Байт\t|" << a10 << "\t\t\t|" << a9 << "\t|\n";
    cout << "|unsigned short\t\t|" << sizeof(a11) << " Байт\t|" << a12 << "\t\t\t|" << a11 << "\t\t\t|\n";
    cout << "|float\t\t\t|" << sizeof(a13) << " Байт\t|" << a14 << "\t\t|" << a13 << "\t\t|\n";
    cout << "|double\t\t\t|" << sizeof(a15) << " Байт\t|" << a16 << "\t\t|" << a15 << "\t\t|\n";
    cout << "|char\t\t\t|" << sizeof(a17) << " Байт\t|" << a18 << "\t\t\t|" << a17 << "\t\t\t|\n";
    cout << "|bool\t\t\t|" << sizeof(a19) << " Байт\t|" << a20 << "\t\t\t|" << a19 << "\t\t\t|\n";

}

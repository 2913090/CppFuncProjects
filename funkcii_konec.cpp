#include <iostream>
using namespace std;
void addElement(int* &array, int num) {
    int size = _msize(array) / sizeof(array[0]);
    int* buf = new int[size + 1];
    for (int i = 0; i < size; i++) {
        buf[i] = array[i];
    }
    buf[size] = num;
    delete[] array;
    array = buf;
}
void showArray(int* array) {
    int size = _msize(array) / sizeof(array[0]);
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}
void reverseArray(int* array) {
    int size = _msize(array) / sizeof(array[0]);
    if (size % 2) size--;
    for (int k ,i = 0; i < size; i+=2) {
        swap(array[i], array[i+1]);
    }
}
int main()
{
    setlocale(LC_ALL, "");
    //int a = 4, b = 9;
    //const int SIZE = 10;
    //int* pa = &a;
    //int* pb = &b;
    //cout << a << " " << pa << endl;
    //cout << b << " " << pb << endl;
    //cout << *pa + *pb << endl;
    //cout << a + *pb << endl;
    //int* pq = new int;
    //*pq = 5;
    int* array = new int[10]{ 0,1,2,3,4,5,6,7,8,9 };
    showArray(array);
    addElement(array, 84);
    showArray(array);
    reverseArray(array);
    showArray(array);



}
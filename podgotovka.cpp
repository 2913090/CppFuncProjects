#include <iostream>
#include <string>
#include <fstream>
#define random(min,max) (min+rand()%(max-min+1))
using namespace std;

void addElement(int*& array, int num) {
	int size = _msize(array) / sizeof(array[0]);
	int* buf = new int[size + 1];
	for (int i = 0; i < size; i++) {
		buf[i] = array[i];
	}
	buf[size] = num;
	delete[] array;
	array = buf;
}

void showArray(int*& array) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}







void addString(string*& array, string stroka, int size) {
	string* buf = new string[size + 1];
	for (int i = 0; i < size; i++)
	{
		buf[i] = array[i];
	}
	buf[size] = stroka;
	delete[] array;
	array = buf;
}
void readfile(string path, string*& array, int& size) {
	string* stringArray = new string[0];
	ifstream in(path);
	if (in.is_open()) {
		string str;
		while (getline(in, str))
		{
			addString(stringArray, str, size++);
		}
	}
	else {
		cout << "ERROR";
	}
	delete[] array;
	array = stringArray;
}
void showArray(string* array, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
}
void showString(string* array, int size, int index) {
	if (index >= size) {
		cout << "ERROR";
		return;
	}
	cout << array[index] << endl;
}
void addStrings(string path, string word) {
	int arraySize = 0;
	string* stringArray = new string[0];
	readfile(path, stringArray, arraySize);
	bool flag = 0;
	int index;
	for (int search = 0, i = 0; i < arraySize; i++) {
		for (int j = 0; j < stringArray[i].length(); j++) {
			if (stringArray[i][j] == word[search]) {
				search++;
			}
			else search = 0;
			if (search == word.length()) {
				index = i;
				flag = 1;
				break;
			}
		}
		if (flag) {
			showString(stringArray, arraySize, index);
			flag = 0;
		}
	}
}








int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));



	//int a1, b1, c1;
	//cout << "Введите первое число\n";
	//cin >> a1;
	//cout << "Введите второе число\n";
	//cin >> b1;
	//cout << "Введите третье число\n";
	//cin >> c1;
	//if (a1 > b1) a1 = b1;
	//if (a1 > c1) a1 = c1;
	//cout << "Наименьшее из введенных чисел: " << a1 << endl;





	//int a2, b2;
	//int sum2 = 0, count2 = 0;
	//float sredArifm2 = 0;
	//cout << "Введите границы диапозона\n";
	//cin >> a2 >> b2;
	//if (a2 > b2) swap(a2, b2);
	//for (int i = a2; i <= b2; i++) {
	//	count2++;
	//	sum2 += i;
	//}
	//sredArifm2 = sum2 / count2;
	//cout << "Сумма значений от " << a2 << " до " << b2 << ": " << sum2 << endl << "Значений: " << count2 << endl << "Среднее арифметическое: " << sredArifm2 << endl;





	//int year;
	//cout << "Введите год\n";
	//cin >> year;
	//if (year % 400 == 0) cout << "YES\n";
	//else if (year % 4 == 0 && year % 100 != 0) cout << "YES\n";
	//else cout << "NO\n";





	//int size4;
	//cout << "Введите размер массива\n";
	//cin >> size4;
	//int* array = new int[size4];
	//for (int i = 0; i < size4; i++) {
	//	array[i] = random(1, 100);
	//	cout << array[i] << " ";
	//}
	//cout << endl;





	//int max5 = array[0];
	//for (int i = 1; i < size4; i++) {
	//	if (max5 < array[i]) max5 = array[i];
	//}
	//cout << "Максимальное число в массиве: " << max5 << endl;





	//addElement(array, 1000);
	//showArray(array);





	//string stroka7;
	//cout << "Введите строку\n";
	//cin >> stroka7;
	//for (int i = stroka7.length(); i >= 0; i--) {
	//	cout << stroka7[i];
	//}
	//cout << endl;







	int arraySize = 0;
	string* stringArray = new string[0];
	readfile("file.txt", stringArray, arraySize);
	showArray(stringArray, arraySize);
	cout << endl;
	addStrings("file.txt", "bla");
}
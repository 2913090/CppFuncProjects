#include <iostream>
#define random(min,max) (min + rand()%(max-min+1))
using namespace std;
void showarray(int* array);
void quicksort1(int* array, int marker1, int marker2, int flag = 1);
void quicksort(int* array) {
	int size = _msize(array) / sizeof(array[0]);
	quicksort1(array, 0, size - 1);
}
void quicksort1(int* array, int marker1, int marker2, int flag) {
	//if (marker1 > marker2 && flag == -1) swap(marker1, marker2);
	if (marker1 != 0) cout << "second" << endl;
	if (marker1 >= marker2 || marker1 < 0) return;
	int size = marker2;
	cout << marker1 << " " << marker2 << endl;
	while (marker1 != marker2) {
		if (marker1 > size || marker1 < 0 || marker2 > size || marker2 < 0) return;
		if (flag == 1) {
			if (array[marker1] >= array[marker2]) {
				swap(array[marker1], array[marker2]);
				swap(marker1, marker2);
				flag *= -1;
			}
		}
		else {
			if (array[marker1] < array[marker2]) {
				swap(array[marker1], array[marker2]);
				swap(marker1, marker2);
				flag *= -1;
			}
		}
		(flag == -1) ? marker2++ : marker2--;
		showarray(array);
	}
	cout << "______________" << endl;
	quicksort1(array, 0, marker1, flag);
	quicksort1(array, marker1 + 1, size, flag);
}
void showarray(int* array) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}
void fillarray(int* array) {
	int size = _msize(array) / sizeof(array[0]);
	for (int i = 0; i < size; i++) {
		array[i] = random(0, 100);
	}
}
int main()
{
	srand(time(NULL));
	int* array = new int[5]{ 16,47,71,49,89 };

	//fillarray(array);
	showarray(array);
	quicksort(array);
	//showarray(array);


}
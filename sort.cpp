#include <iostream>
int main()
{
    using namespace std;
    srand(time(NULL));
    int const C = 10;
    int a, b, masiv1[C], masiv2[C], masiv3[C], count = 0, sort1 = 0, sort2 = 0, sort3 = 0;
    bool flag;
    a = 1;
    b = 9;
    if (a > b)swap(a, b);
    for (int q = 0; q < C; q++) {
        masiv1[q] = a + rand() % (b + 1 - a);
        cout << masiv1[q] << " ";
    }
    for (int q = 0; q < C; q++) {
        masiv2[q] = masiv1[q];
        masiv3[q] = masiv1[q];
    }

    cout << endl;


    //сортировка пузырьком
    for (int q = C-1; q > 0; q--) {
        flag = true;
        for (int w = 0; w < q; w++) {
            if (masiv1[w] > masiv1[w + 1]) {
                swap(masiv1[w], masiv1[w + 1]);
                flag = false;
                count++;
            }
            sort1++;
        }
        if (flag)
            break;
    }





    //сортировка вставками
    for (int q = 1; q < C; q++) {
        for (int w = q; w > 0; w--) {
            if (masiv2[w] < masiv2[w - 1])
                swap(masiv2[w], masiv2[w - 1]);
            else break;
            sort2++;
        }
    }



    //сортировка шейкерная
    for (int flag, q = C-1, z=0; q > z; q--) {
        flag = true;
        for (int w = z; w < q; w++) {
            if (masiv3[w] > masiv3[w + 1]) {
                swap(masiv3[w], masiv3[w + 1]);
                flag = false;
            }
            sort3++;
        }
        for (int e = q-1; e > z; e--) {
            if (masiv3[e] < masiv3[e - 1]) {
                swap(masiv3[e], masiv3[e - 1]);
                flag = false;
            }
            sort3++;
        }
        if (flag) break;
        z++;
    }








    for (int q = 0; q < C; q++)
        cout << masiv1[q] << " ";
    cout << endl;
    for (int q = 0; q < C; q++)
        cout << masiv2[q] << " ";
    cout << endl;
    for (int q = 0; q < C; q++)
        cout << masiv3[q] << " ";
    cout << endl;

    cout << "bubble sort - " << sort1 << endl << "insertion sort - " << sort2 << endl << "shaker sort - " << sort3;

}
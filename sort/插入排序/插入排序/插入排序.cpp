#include <iostream>

using namespace std;

void InsertSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int j;
        if (arr[i] < arr[i - 1]) {
            int temp = arr[i];
            for (j = i - 1; j >= 0 && temp < arr[j]; j--) {
                arr[j + 1] = arr[j];
            }
            arr[j + 1] = temp;
        }
    }
}
int main() {
    int arr[10] = { 1,23,54,231,1,4,2,5,512,2 };
    InsertSort(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << " ";
    }
    system("pause");
}
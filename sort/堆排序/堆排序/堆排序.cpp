#include <iostream>
using namespace std;

void HeapAdjust(int arr[], int index , int length) {
    int max = index;//当前结点
    int lchird = index * 2 + 1;
    int rchird = index * 2 + 2;
    if (lchird < length&& arr[lchird]>arr[max]) {
        max = lchird;
    }
    if (rchird < length && arr[rchird] > arr[max]) {
        max = rchird;
    }
    if (index != max) {
        swap(arr[max], arr[index]);
        HeapAdjust(arr, max, length);
    }
}
void HeapSort(int arr[],int length) {
    //初始化堆
    for (int i = length / 2 - 1; i >= 0; i--) {
        HeapAdjust(arr, i, length);
    }
    //交换
    for (int i = length - 1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        HeapAdjust(arr, 0, i);
    }

}

int main() {
    int arr[10] = { 4,2,8,0,5,7,1,3,9,6 };
    int size = sizeof(arr) / sizeof(int);
    HeapSort(arr,size);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << " ";
    }
    system("pause");
    return 0;
}

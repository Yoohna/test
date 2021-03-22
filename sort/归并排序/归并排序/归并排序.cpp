#include <iostream>
using namespace std;

void Merge(int arr[], int begin, int end, int mid, int* temp) {
    int i_begin = begin;
    int i_end = mid;
    int j_begin = mid + 1;
    int j_end = end;
    int size = 0;//辅助空间元素
    //合并两个有序序列
    while (i_begin <= i_end && j_begin <= j_end)
    {
        if (arr[i_begin] < arr[j_begin]) {
            temp[size] = arr[i_begin];
            size++;
            i_begin++;
        }
        else {
            temp[size] = arr[j_begin];
            size++;
            j_begin++;
        }
    }
    while (i_begin<=i_end)
    {
        temp[size] = arr[i_begin];
        size++;
        i_begin++;
    }
    while (j_begin <= j_end)
    {
        temp[size] = arr[j_begin];
        size++;
        j_begin++;
    }
    //辅助空间覆盖源空间
    for (int i = 0; i < size; i++) {
        arr[begin+i] = temp[i];
    }
}

void MergeSort(int arr[], int begin, int end,int* temp) {
    if (begin >= end) return;
    int mid = (begin + end) / 2;
    //分组
    MergeSort(arr, begin, mid, temp);
    MergeSort(arr, mid + 1, end, temp);
    //合并
    Merge(arr, begin, end, mid, temp);
}

int main() {
    int arr[10] = { 4,2,8,0,5,7,1,3,9,6 };
    int arr2[10];
    int size = sizeof(arr) / sizeof(int);
    MergeSort(arr, 0, size - 1,arr2);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << " ";
    }
    system("pause");
}
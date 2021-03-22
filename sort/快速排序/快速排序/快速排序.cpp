#include <iostream>
using namespace std;

void QuickSort(int arr[],int begin,int end) {
    int i = begin;
    int j = end;
    int temp = arr[begin];//��׼��
    if (i<j) {
        while (i<j){
            //���������ұȻ�׼��С��Ԫ��
            while (i<j&&arr[j]>temp)
            {
                j--;
            }
            if (i < j) {
                arr[i] = arr[j];
                i++;
            }
            //���������ұȻ�׼�����Ԫ��
            while (i<j && arr[i]<temp)
            {
                i++;
            }
            if (i < j) {
                arr[j] = arr[i];
                j--;
            }

        }
        //��׼���ŵ�i==j�ĵط�
        arr[i] = temp;
        QuickSort(arr, begin, i - 1);
        QuickSort(arr,i + 1, end);
    }
}

int main() {
    int arr[10] = { 4,2,8,0,5,7,1,3,9,6};
    int size = sizeof(arr) / sizeof(int);
    QuickSort(arr,0,size-1);
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << " ";
    }
    system("pause");
}

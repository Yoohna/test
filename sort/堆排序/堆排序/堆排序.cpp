#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int>& arr, int begin, int end) {
    int temp = arr[begin];
    while (begin < end)
    {
        while (begin < end && arr[end] > temp) end--;
        arr[begin] = arr[end];
        while (begin < end && arr[begin] < temp) begin++;
        arr[end] = arr[begin];
    }
    arr[begin] = temp;
    return begin;
}

void QuickSort(vector<int>& arr, int begin, int end)
{
    if (begin > end) return;
    int mid = Partition(arr, begin, end);
    QuickSort(arr, begin, mid - 1);
    QuickSort(arr, mid + 1, end);
}


int main() {
    vector<int> arr = { 5,1,6,2,5 };
    int size = arr.size();
    QuickSort(arr,0,size-1);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    system("pause");
    return 0;
}
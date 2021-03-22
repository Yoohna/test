#include <iostream>
using namespace std;

void ShellSort(int arr[], int length) {
    int increasement = length;
    do {
        //确定分组的增量
        increasement = increasement / 3 + 1;
        int i, j, k;
        for (i = 0 ; i < increasement; i++) {
            for (j = i + increasement; j < length; j+=increasement) {
                if (arr[j] < arr[j - increasement]) {
                    int temp = arr[j];
                    for (k = j - increasement; k > 0 && temp < arr[k]; k-=increasement) {
                        arr[k + increasement] = arr[k];
                    }
                    arr[k + increasement] = temp;
                }
            }
        }
    } while (increasement > 1);

}
int main() {
    int arr[10] = { 1,23,54,231,1,4,2,5,512,2 };
    ShellSort(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << arr[i] << " ";
    }
    system("pause");
}
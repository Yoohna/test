#include <iostream>
using namespace std;

void SelectSort(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		int min = i;
		for (int j = i + 1; j < length; j++) {
			if (arr[min] > arr[j])
				min = j;
		}
		if (min != i) {
			swap(arr[i], arr[min]);
		}
	}
}
int main() {
	int arr[10] = { 1,23,54,231,1,4,2,5,512,2 };
	SelectSort(arr, sizeof(arr) / sizeof(int));
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cout << arr[i] << " ";
	}
	system("pause");
}

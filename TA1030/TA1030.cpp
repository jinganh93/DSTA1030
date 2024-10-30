#include <iostream>
using namespace std;

void change_size(int* arr, int *size) {
	*size *= 1.5;//修改大小值
	int* new_arr = new int[*size];
	int* ra = arr;
	copy(arr, arr + *size, new_arr);
	delete[] ra;
	arr = new_arr;
}

void print_arr(int* arr, int size) {
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
}

int main(void) {
	int size = 5;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	};
	print_arr(arr, size);  //顯示陣列內容

	change_size(arr, &size); //擴充

	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	};
	print_arr(arr, size);  
}
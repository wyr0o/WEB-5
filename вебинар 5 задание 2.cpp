#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int size = sizeof(arr) / sizeof(arr[0]);

	int minval = arr[0];
	int maxval = arr[0];

	cout << "массив: ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < minval)
		{
			minval = arr[i];
		}
		if (arr[i] > minval)
		{
			maxval = arr[i];
		}
	}

	cout <<endl<<  "минимальный элемент: " << minval; 
	cout <<endl<<  "максимальны элемент: " << maxval;
}
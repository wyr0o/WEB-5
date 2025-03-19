#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	int arr[10] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
	cout << "Массив до сортировки: ";

	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < size;i++)
	{
		for (int j = size - 1; j > 0; j--)
		{
			if (arr[j] < arr[j - 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
	cout <<endl<< "массив после сортировки: ";

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

}
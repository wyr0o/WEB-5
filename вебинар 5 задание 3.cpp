#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);

	int arr[3][6] =
	{ {1, 2, 3, 4, 5, 6},
	 {7, 8, 9, 10, 11, 12 },
	 {13, 14, 15, 16, 17, 18 } };

	int rows = sizeof(arr) / sizeof(arr[0]);
	int columns = sizeof(arr[0]) / sizeof(arr[0][0]);

	cout << "массив: "<< endl;

	int minval = arr[0][0];
	int maxval = arr[0][0];

	int maxRows = 0;
	int minRows = 0;

	int maxCol = 0;
	int minCol = 0;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr[i][j] < minval)
			{
				minval = arr[i][j];
				minRows = i;
				minCol = j;
			}
			if (arr[i][j] > maxval) 
			{
				maxval = arr[i][j];
				maxRows = i;
				maxCol = j;
			}
		}
	}

	cout <<endl<< "индекс минимального элемента: " << minRows<< " " << minCol;
	cout <<endl<< "индекс максимального элемента: " << maxRows << " " << maxCol;
}
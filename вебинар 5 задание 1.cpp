﻿#include <iostream>

using namespace std;

int main()
{
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int size = sizeof(arr) / sizeof(arr[0]);

	for (int i = 0; i < size; i++)
	{
		cout << arr[i];
		if (i < size - 1) 
		{
			cout << ", ";
		}
	}
}
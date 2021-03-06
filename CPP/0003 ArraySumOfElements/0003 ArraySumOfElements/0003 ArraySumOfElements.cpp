// 0003 ArraySumOfElements.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

int SumOfElements(int*, int);

using namespace std;
int main()
{
	int n=5;
	
	cout << "\t This program returns the sum of elements of a given array.\n\n"
		<< "How many elements should the array have? ";
	cin >> n;

	if (n <= 0)
	{
		cout << "\nYou seem to be joking, Sir. An array must consist of at least one value.";

		getchar();
		getchar();
		return 0;
	}

	int *arr = new int[n];
	cout << "\nInput the elements of this array, please: \n";

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "\nAnswer: " << SumOfElements(arr, n);

	getchar();
	getchar();
    return 0;
}

int SumOfElements(int* arr, int n)              //*arr - pointer to our array, n amount of elements in it
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}

	return sum;
}

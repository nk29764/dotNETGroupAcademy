// 0002 AbsoluteValue.cpp: definiuje punkt wejścia dla aplikacji konsolowej.
//

#include "stdafx.h"
#include <iostream>

float value;
float AbsoluteValue(float);

using namespace std;
int main()
{
	cout << "\tThis program returns the absolute value of a given number.\n"
		<< "Input a value: ";
	cin >> value;
	cout << "\n\n Absolute value: " << AbsoluteValue(value);

	getchar();
	getchar();
    return 0;
}

float AbsoluteValue(float value)
{
	if (value >= 0)
	{
		return value;
	}
	else
	{
		return -value;
	}
}
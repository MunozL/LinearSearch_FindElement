// LinearSearch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int Numbers[10], n = 10, key;

	cout << "Plese Enter numbers : " << endl;
	for (int i = 0; i < n; i++) {

		cin >> Numbers[i];

	}

	cout << "Enter key" << endl;
	cin >> key;

	for (int i = 0; i < n; i++)
	{
		if (key == Numbers[i]) {

			cout << " Fount at index: " << i;
			return 0;
		}
	}

	cout << "Not Found";
	return 0;
}


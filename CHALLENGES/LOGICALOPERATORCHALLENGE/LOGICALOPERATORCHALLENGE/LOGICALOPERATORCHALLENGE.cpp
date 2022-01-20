// LOGICALOPERATORCHALLENGE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int x = 5;

int main()
{
	cout << x << '\n';

	if (x > 3 && x < 7)
	{

		cout << "The variable x is larger than 3 and smaller than 5!\n";
	}

	if (x > 4 || x < 6
		)
	{

		cout << "The variable x is either larger than 4 or also smaller than 6!\n";
	}

	if (!(x == 6))
	{

		cout << "The variable x is not 6!\n";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

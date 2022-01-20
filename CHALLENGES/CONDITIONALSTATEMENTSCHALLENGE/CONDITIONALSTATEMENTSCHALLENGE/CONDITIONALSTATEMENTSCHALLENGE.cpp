// CONDITIONALSTATEMENTSCHALLENGE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std; 

int x = 5;
int flavor = 3;
string favArmy = "Blood Angels";

int main()
{
	if (!(x == 3))
	{
		std::cout << "X does not equal 3!\n";
	}
	else if (!(x == 7))
	{
		std::cout << "X does not equal 7!\n";
	}
	else
	{
		std::cout << "X is some other number than 3 and 7!\n";
	}

	switch (flavor)
	{
	case 1:
		cout << "Strawberry\n";
		break;
	case 2:
		cout << "Vanilla\n";
		break;
	case 3:
		cout << "Chocolate\n";
		break;
	case 4:
		cout << "Bananna Split\n";
		break;
	default:
		cout << "Maybe you don't like icecream?\n";
		break;
	}

	string result = (favArmy == "Blood Angels") ? "For the sons of Sanguinius!" : "Not a fan of Sanguinius?";
	cout << result;
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

// FUNCTIONCHALLENGE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

void noArguments(string nArg = "No arguments here!\n") {
    cout << nArg;
}

void stats(int str, int dex, int hp) {
    cout << "My strength score is: " << str << " My dexterity score is: " << dex << " And my HP is: " << hp << '\n';
}

int someReturning(int x, int y) {
    return x * y;
}

void swapNums(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

int blanketAdd(int d, int e) {
    return d + e;
}

double blanketAdd(double d, double e) {
    return d + e;
}


int main()
{
    noArguments();
    stats(9, 18, 24);
    cout << someReturning(2, 4) << '\n';

    int firstNum = 13;
    int secondNum = 44;

    cout << "Before swap: " << "\n";
    cout << firstNum << ", " << secondNum << "\n";

    swapNums(firstNum, secondNum);

    cout << "After swap: " << "\n";
    cout << firstNum << ", " << secondNum << "\n";

    int num1 = blanketAdd(4,13);
    double num2 = blanketAdd(4.2, 6.9);
    cout << "Int: " << num1 << '\n';
    cout << "Double: " << num2 << '\n';
    return 0;
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

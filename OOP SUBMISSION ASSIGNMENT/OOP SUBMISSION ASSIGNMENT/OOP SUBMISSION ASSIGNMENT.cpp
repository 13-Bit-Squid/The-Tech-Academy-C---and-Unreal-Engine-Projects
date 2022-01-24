// OOP SUBMISSION ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Dog
{
public:
    string breed;
    string color;
    string height;
    string weight;

    void Shake() {
        cout << "*Raises paw* ";
    }
    void Sit() {
        cout << "*Sits* ";
    }
    void LayDown() {
        cout << "*Lies down* ";
    }
};

int main()
{
    Dog myDog;
    myDog.breed = "Hound";
    myDog.color = "Brown";
    myDog.height = "2 ft";
    myDog.weight = "60 lbs";

    cout << "My dog knows some tricks! He can: " << "Shake! "; 
    myDog.Shake();
    cout << "Sit! ";
    myDog.Sit();
    cout << "And lay down! ";
    myDog.LayDown();
    cout << "What a good dog!";
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

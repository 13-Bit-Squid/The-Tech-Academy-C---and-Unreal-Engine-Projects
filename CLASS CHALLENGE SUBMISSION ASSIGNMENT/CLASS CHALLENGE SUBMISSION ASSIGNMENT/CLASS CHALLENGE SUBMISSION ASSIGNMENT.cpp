// CLASS CHALLENGE SUBMISSION ASSIGNMENT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

class Shape
{
public:
    string color;

    int getArea() {
        cout << "Find the area to your shape.";
    }
};

class Rectangle : public Shape
{
public:
    string color;
    int height;
    int width;

    int getArea() {
        int rArea = height* width;
        cout << "The area of the rectangle is: " + rArea;
        return rArea;
    }
};

class Triangle : public Shape
{
public:
    string color;
    int height;
    int base;

    void getArea() {
        int tArea = (height * base)/2;
        cout << "The area of the triangle is: " + tArea;
    }
};

class Circle : public Shape
{
public:
    string color;
    int radius;

    void getArea() {
        int cArea = 3 * radius^2;
        cout << "The area of the circle is: " + cArea;
    }
};

int main()
{

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

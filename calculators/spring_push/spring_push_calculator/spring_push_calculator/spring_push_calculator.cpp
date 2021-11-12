// spring_push_calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <conio.h>
int main()
{
    float l = NULL;
    float c = NULL;
    float d = NULL;
    std::cout << "What is the length of the spring(mm)?\n";
    std::cin >> l;
    std::cout << "What is the wire diameter(mm)?\n";
    std::cin >> d;
    std::cout << "How many coils does the spring have?\n";
    std::cin >> c;
    float P = l - c * d;
    std::cout << "The spring can push for " << P << " mm";
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

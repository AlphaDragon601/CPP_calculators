#include <iostream>
#include <conio.h>
#include <cmath>
int main(){

// float radius1 = NULL;
// float radius2 = NULL;
float radius1;
float radius2;
float deadband;
float pi = 3.1415926535897932384626;

std::cout << "enter holding body radius \n";
std::cin >> radius1;
std::cout << "enter the radius of the body to be held inside \n";
std::cin >> radius2;
std::cout << "enter a space between held bodies \n";
std::cin >> deadband;

float circ_count = ((radius1 - radius2)*pi)/(2*radius2) + deadband;
float fix = circ_count/2;
float answer = round(fix);

std::cout << fix;
std::cout << '\n' << answer;
}
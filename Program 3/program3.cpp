// Easton Schmidt
// CSC 150, 9:30am
// 10/02/26
// Program 3

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    // Define Variables
    float area, areaSquareFeet, rainfall, townDiameter, volume, radius;
    string town;
    const float pi = 3.14159;

    // User Enters the name of the nearest town, diameter of that town, and the amount of rainfall
    cout << "Please enter the name of the nearest town to you: ";
    getline (cin, town);

    cout << "Enter the diameter of the town in miles: ";
    cin >> townDiameter;

    cout << "How any inches of rain fell?: ";
    cin >> rainfall;

    // Calculate the area of the town in square miles and square feet
    radius = townDiameter/2;
    area = pi * pow((radius), 2);
    areaSquareFeet = area * pow(5280, 2);

    // Calculate the volume of rain that fell in cubic feet
    volume = areaSquareFeet * (rainfall/12); // rainfall converted to feet

    // Display the values and results in a clean table
    cout << setprecision(1) << fixed;
    cout << "\nResults" << endl;
    cout << "-----------------------------" << endl;
    cout << left << setw(20) << "Town: " << town << endl;
    cout << left << setw(20) << "Town Diameter: " << townDiameter << " miles" << endl;
    cout << left << setw(20) << "Rainfall: " << rainfall << " inches" << endl;
    cout << left << setw(20) << "Rainfall Area: " << area << " square miles" << endl;
    cout << left << setw(20) << "Volume: " << volume << " cubic feet" << endl;

    return 0;
}
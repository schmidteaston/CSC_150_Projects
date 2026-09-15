// Easton Schmidt
// 09/15/2026
// CSC 150, 9:30am
// Program 2, Variables & I/O
// Calculates the total surface area of a shed that needs to be painted

#include <iostream>
using namespace std;

//Define Variables
static float length, width, sideHeight, peakHeight, triHeight, frontAndBackArea, sidesArea, totalArea;

int main() {
    // Ask user to enter their shed measurements
    cout << "Please Enter Your Measurements in Feet to 1 or 2 decimal places." <<endl;

    // Input Shed Height
    cout << "Length of Left or Right Side: ";
    cin >>  length;

    // Input Shed Width
    cout << "Width of Front or Back Side: ";
    cin >>  width;

    // Input Shed Side Wall Height
    cout << "Side Wall Height: ";
    cin >>  sideHeight;

    // Insert Shed Peak Height
    cout << "Peak Height: ";
    cin >>  peakHeight;

    // Calculate the remaining needed measurement
    triHeight = peakHeight - sideHeight;

    // Calculate the area of the front and back sides
    frontAndBackArea = ((sideHeight * width) + ((triHeight * width)/2))*2;

    // Calculate the area of the left and right sides
    sidesArea = (sideHeight * length)*2;

    // Calculate total surface area
    totalArea = sidesArea + frontAndBackArea;

    // Display the total surface area to the monitor
    cout << "\nYour total area that needs to be painted is " << totalArea << " square feet!" <<endl;

    // Display the measurements to the monitor
    cout << "\nLength = " << length << " ft" << endl;
    cout << "Width = " << width << " ft" << endl;
    cout << "Side Height = " << sideHeight << " ft" << endl;
    cout << "Peak Height = " << peakHeight << " ft" << endl;
    cout << "Triangle Height = " << triHeight << " ft" << endl;
    cout << "Area of Front And Back Side = " << frontAndBackArea << " sqft" << endl;
    cout << "Area of Left and Right Sides = " << sidesArea << " sqft" << endl;
    return 0;
}
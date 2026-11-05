// Easton Schmidt
// Program 5
// CSC 150 9:30am
// 10/30/26
// Program to read data from a sales file and find the total sales, average sales, least sold, and most sold

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() {

    // Define Variables
    int value;
    int total = 0;
    int largest;
    int smallest;
    float average;

    // Open the Sales File
    ifstream inputFile;
    inputFile.open("GTA.txt");

    // Check if file was unable to open and stop program if so
    if (!inputFile) {
        cout << "Unable to open file" << endl;
        return 0;
    }

    // Use a for loop to add up all of the 30 values and find the smallest and largest value
    for (int i = 1; i <= 30; i++) {

        // Search for value
        inputFile >> value;

        // Add Value to the total
        total = total + value;

        // Set smallest and largest equal to the first value
        if (i == 1) {
            largest = value;
            smallest = value;
        }

        // compare the following values to find the largest
        if (value > largest) {
            largest = value;
        }

        // compare the following values to find the smallest
        if (value < smallest) {
            smallest = value;
        }
    }
    inputFile.close();

    // Calculate average
    average = total / 30.0;

    // Display all the values in a table
    cout << setprecision(2) << fixed;
    cout << "Results" << endl;
    cout << "--------------------------------------" << endl;
    cout << setw(22) << left << "Largest Day: " << setw(10) << right << largest << " Sales" << endl;
    cout << setw(22) << left << "Smallest Day: " << setw(10) << right << smallest << " Sales" << endl;
    cout << setw(22) << left << "Average: " << setw(10) << right << average << " Sales" << endl;
    cout << setw(22) << left << "Total for Month: " << setw(10) << right << total << " Sales" << endl;

    return 0;
}

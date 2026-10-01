//
// Created by Easton Schmidt on 9/22/26.
//

#include <iostream>
#include <cmath>  // access to pow and sqrt
#include <iomanip> // access to setw and setprecision
using namespace std;

int main() {
    static double triHeight, triBase, hypotenuse;
    string name;

    cout << "Please Enter your Name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!" << endl;

    cout << "Enter the Height of the Triangle: ";
    cin >> triHeight;

    cout << "Enter the Length of the Base of the Triangle: ";
    cin >> triBase;

    hypotenuse = sqrt(pow(triHeight, 2) + pow(triBase, 2));

    // print values to a table
    // fixed causes precision to be decimal places instead of significant digits
    cout << fixed << setprecision(2);
    cout << "\nResults: " << endl;
    cout << "---------------------" << endl;
    cout << right;
    cout << setw(12) << "Height: " << setw(12) << triHeight << endl;
    cout << setw(12) << "Base: " << setw(12) << triBase << endl;
    cout << setw(12) << "Hypotenuse: " << setw(12) << hypotenuse << endl;

    return 0;
}


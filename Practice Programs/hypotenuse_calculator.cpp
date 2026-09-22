//
// Created by Easton Schmidt on 9/22/26.
//

#include <iostream>
#include <cmath>  // access to pow and sqrt
#include <iomanip>
using namespace std;

int main() {
    static double triHeight, triBase, hypotenuse;

    cout << "Enter the Height of the Triangle: ";
    cin >> triHeight;

    cout << "Enter the Length of the Base of the Triangle: ";
    cin >> triBase;

    hypotenuse = sqrt(pow(triHeight, 2) + pow(triBase, 2));

    // print values to a table
    // fixed causes precision to be decimal places instead of significant digits
    cout << fixed << setprecision(2);
    cout << "\nResults: " << endl;
    cout << "Height: " << triHeight << endl;
    cout << "Base: " << triBase << endl;
    cout << "Hypotenuse: " << hypotenuse << endl;

    return 0;
}


// Easton Schmidt
// CSC 150; 9:30am
// 10-8-26
// Program 4
// A "tutoring" program to help students with basic math

#include <iostream>
#include <iomanip>
#include <random>
#include <cmath>
using namespace std;

int main() {

    // Declare Variables
    int userSelection, number1, number2;
    double userAnswer, problemAnswer;

    cout << "Welcome to Math Tutoring!" << endl << endl;

    // Print the selection table and ask user for their choice
    cout << "1. Add" << endl
         << "2. Subtract" << endl
         << "3. Multiply" << endl
         << "4. Divide" << endl
         << "5. Quit" << endl
         << endl << "Enter your choice (1-5): ";
    cin >> userSelection;

    // Set up random number generator
    random_device numGen;
    uniform_int_distribution<int> randomInt(0, 99);

    // Generate 2 random values for the math equation
    number1 = randomInt(numGen);
    number2 = randomInt(numGen);

    // Check for each user input 1-5 and generate corresponding equation
    switch (userSelection) {
        case 1:
            cout << "Please answer the following equation." << endl;
            problemAnswer = number1 + number2;
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " + " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            cin >> userAnswer;
            break;
        case 2:
            cout << "Please answer the following equation." << endl;
            problemAnswer = number1 - number2;
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " - " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            cin >> userAnswer;
            break;
        case 3:
            cout << "Please answer the following equation." << endl;
            problemAnswer = number1 * number2;
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " x " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            cin >> userAnswer;
            break;
        case 4:
            cout << "Please answer the following equation. " << endl
                 << "Round to 1 Decimal." << endl;
            problemAnswer = static_cast <double> (number1) / number2; // Keep the decimal value
            problemAnswer = round(problemAnswer*10) / 10;              // Round to 1 decimal place
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " % " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            cin >> userAnswer;
            break;
        default:
            cout << "Thank you for trying our program!";
            return 0;
    }

    // Check if user answer is correct and display correct/incorrect
    if (userAnswer == problemAnswer) {
        cout << "Correct! Well Done!" << endl;
    }
    else {
        cout << setprecision (1) << fixed;
        cout << "Wrong answer!" << endl;
        cout << "The correct answer was " << problemAnswer << endl;
    }
    return 0;
}
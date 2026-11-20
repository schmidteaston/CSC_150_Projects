// Easton Schmidt
// CSC 150; 9:30am
// 11-17-26
// Program 6
// Re-writing Program 4 With Functions

#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

// Define prototypes for functions
int printMenu();
int getProblem(int, int &);
void getUserAnswer(int, int , int);

int main() {
    // Declare Variables
    int userSelection = 0, remainderAnswer = 0, problemAnswer = 0;

    cout << "Welcome to Math Tutoring!" << endl << endl;

    // Continue looping the program until the user selects 5 to quit
    while (userSelection != 5) {
        userSelection = printMenu();
                if (userSelection !=5) {
                problemAnswer = getProblem(userSelection, remainderAnswer);
                getUserAnswer(problemAnswer, userSelection, remainderAnswer);
            }
    }
    cout << "Thank You For Trying Our Program!";
    return 0;
}

int printMenu() {
    // Print the selection table and ask user for their choice
    cout << "1. Add" << endl
         << "2. Subtract" << endl
         << "3. Multiply" << endl
         << "4. Divide" << endl
         << "5. Quit" << endl
         << endl << "Enter your choice (1-5): ";
    int selection;
    cin >> selection;
    // Check for incorrect input
    while (selection < 1 || selection > 5) {
        cout << "Incorrect Choice. Please enter a number 1-5: ";
        cin >> selection;
    }
    return selection;
}

int getProblem(int selection, int &remainderAnswer) {
     // Set up random number generator
    random_device numGen;
    uniform_int_distribution<int> randomInt(0, 99);

    // Generate 2 random values for the math equation
    int number1 = randomInt(numGen);
    int number2 = randomInt(numGen);

    // Check for each user input 1-5 and generate corresponding equation and answer
    int answer;
    switch (selection) {
        case 1:
            cout << "Please answer the following equation." << endl;
            answer = number1 + number2;
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " + " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            break;
        case 2:
            cout << "Please answer the following equation." << endl;
            answer = number1 - number2;
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " - " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            break;
        case 3:
            cout << "Please answer the following equation." << endl;
            answer = number1 * number2;
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " x " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            break;
        case 4:
            while (number2 == 0) {
                number2 = randomInt(numGen);
            }
            cout << "Please answer the following equation. " << endl;
            answer = number1 / number2;
            remainderAnswer = number1 % number2;
            cout << setw (9) << right << number1 << endl
                 << setw (7) << right << " / " << number2 << endl
                 << setw (10) << right << " ------ " << endl;
            break;
        default:
            return 0;
    }
    return answer;
}

void getUserAnswer(int correctAns, int selection, int remAns) {
    // Get user answer
    int userAnswer;
    int userRemainder = 0;
    if (selection != 4) {
       cout << "Answer: ";
       cin >> userAnswer;
   }
    else {
       cout << "Quotient: ";
       cin >> userAnswer;
       cout << "Remainder: ";
       cin >> userRemainder;
    }

    // Check if user answer is correct and display correct/incorrect
    if (userAnswer == correctAns && (selection != 4 || userRemainder == remAns)) {
        cout << "Correct! Well Done!" << endl << endl;
    }
    else {
        cout << "Wrong answer!" << endl;
        if (selection == 4) {
            cout << "The correct answer is: " << correctAns << " R " << remAns << endl << endl;
        }
        else {
            cout << "The correct answer is: " << correctAns << endl << endl;
        }
    }
}
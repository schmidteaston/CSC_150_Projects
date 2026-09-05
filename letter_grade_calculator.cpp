#include <iostream>
using namespace std;

// Define Colors
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

// Define Variables
int scores = 0, num, average;
string grade;

int main() {
    // Loop the cin function until 5 scores have benn entered
    cout << YELLOW << "Please enter your scores: " << RESET << endl;
    for (int count = 1; count <=5; count++) {
        cout << "Score " << count << ": ";
        cin >> num;
        scores = scores + num;
    }

    average = scores / 5;

    if (average >= 90) {
        grade = "A";
    }
    else if (average >= 80) {
        grade = "B";
        }
    else if (average >= 70) {
        grade = "C";
    }
    else if (average >= 60) {
        grade = "D";
    }
    else {
        grade = "F";
    }

    cout << BLUE << "Your Average Score is " << average << "!" << RESET<< endl;
    cout << GREEN << "Your Letter Grade is " << grade << "!" << RESET<< endl;
    return 0;
}

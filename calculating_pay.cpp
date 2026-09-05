// Calculating and Displaying Gross Pay
// Easton Schmidt
// 09/01/26
// CSC 150, 9:30AM

#include <iostream>
using namespace std;

int main() {
    // create variables - create a space for the computer to store values
    float pay,hours,rate;

    //find out how many hours the user worked
    cout << "How many hours did you work?\n";
    cin >> hours;

    //find out the users hourly pay rate
    cout << "What is your hourly rate?\n";
    cin >> rate;

    //calculate the users gross pay
    pay=hours*rate;

    //display the users final gross pay
    cout <<"Your Gross Pay is $" <<pay<< "!" <<endl;

    return 0;
}
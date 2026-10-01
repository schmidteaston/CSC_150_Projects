#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int servings;
    double cost, total_cost;

    cout << "Enter the name of your favorite food: ";
    getline(cin, name);
    cout << "Enter the number of servings: ";
    cin >> servings;
    cout << "Enter the cost per serving: ";
    cin >> cost;

    total_cost = servings * cost;

    cout << setprecision(2) << fixed;
    cout << "The total cost of " << servings << " " << name << " is: $" << total_cost << "!" << endl;

}
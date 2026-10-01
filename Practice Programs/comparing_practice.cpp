#include <iostream>
using namespace std;

int main() {
    int x, y;

    // read 2 integers from the user
    cout << "Enter 2 values: ";
    cin >> x >> y;

    // print less than, greater than, or equal to comparing x and y
    if (x > y) {
        cout << x << " is greater than " << y << endl;
    }
    else if (x < y) {
        cout << x << " is less than " << y << endl;
    }
    else {
        cout << x << " is equal to " << y << endl;
    }
}

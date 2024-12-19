#include <iostream>
using namespace std;

double squareRoot(int x, double precision) {
    double left = 0, right = x;
    double mid;

    while (right - left > precision) {
        mid = left + (right - left) / 2;
        if (mid * mid < x) {
            left = mid; // Move left up
        } else {
            right = mid; // Move right down
        }
    }

    return left + (right - left) / 2; // Return the average of left and right
}

int main() {
    int x;
    double precision;

    cout << "Enter a positive number: ";
    cin >> x;
    cout << "Enter the precision (e.g., 0.0001): ";
    cin >> precision;

    double result = squareRoot(x, precision);
    
    // Print the result with a specified number of decimal places
    cout << "Square Root = " << result << endl;

    return 0;
}

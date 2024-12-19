#include <iostream>
using namespace std;

int findSmallestGreaterOrEqual(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= target) {
            result = arr[mid];
            right = mid - 1; // Continue searching in the left half
        } else {
            left = mid + 1; // Search in the right half
        }
    }
    
    return result;
}

int main() {
    int n, target;

    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target value: ";
    cin >> target;

    int result = findSmallestGreaterOrEqual(arr, n, target);

    if (result != -1) {
        cout << "Result = " << result << endl;
    } else {
        cout << "No element found that is greater than or equal to the target." << endl;
    }

    return 0;
}

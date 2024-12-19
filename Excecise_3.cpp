#include <iostream>
using namespace std;

int findFirstOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, firstIndex = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            firstIndex = mid;
            right = mid - 1; // Continue searching in the left half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return firstIndex;
}

int findLastOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, lastIndex = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            lastIndex = mid;
            left = mid + 1; // Continue searching in the right half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return lastIndex;
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

    cout << "Enter the target element to find: ";
    cin >> target;

    int first = findFirstOccurrence(arr, n, target);
    int last = findLastOccurrence(arr, n, target);

    if (first != -1) {
        cout << "First Occurrence = " << first << endl;
    } else {
        cout << "Element not found." << endl;
    }

    if (last != -1) {
        cout << "Last Occurrence = " << last << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}

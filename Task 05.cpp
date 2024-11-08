#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int positiveCount = 0, negativeCount = 0, oddCount = 0;

    // Input 10 numbers from the user
    cout << "Please enter 10 integers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display and count positive, negative, and odd numbers
    cout << "\nPositive numbers: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0) {
            cout << arr[i] << " ";
            positiveCount++;
        }
    }

    cout << "\nNegative numbers: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            cout << arr[i] << " ";
            negativeCount++;
        }
    }

    cout << "\nOdd numbers: ";
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            oddCount++;
        }
    }

    // Display the counts
    cout << "\n\nNumber of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int arr[7];
    int countMultiplesOfFive = 0;

    // Input 7 integers from the user
    cout << "Please enter seven integers:\n";
    for (int i = 0; i < 7; i++) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display multiples of five and count them
    cout << "\nMultiples of five in the array: ";
    for (int i = 0; i < 7; i++) {
        if (arr[i] % 5 == 0) {
            cout << arr[i] << " ";
            countMultiplesOfFive++;
        }
    }

    // Output the count of multiples of five
    cout << "\n\nNumber of integers that are multiples of five: " << countMultiplesOfFive << endl;

    return 0;
}
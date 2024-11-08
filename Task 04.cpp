#include <iostream>
using namespace std;

int main() {
    int arr[10];

    // Input 10 numbers into the array
    cout << "Please enter 10 numbers:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Print the array in reverse order
    cout << "\nArray in reverse order:\n";
    for (int i = 9; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

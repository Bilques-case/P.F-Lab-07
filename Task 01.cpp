#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    //Above done
    int arr[size];//array size
    int value;//value for input
    // first loop to input values into the array
    for (int i = 0; i < size; i++) {
        cout << "Enter value to store in the array at index " << i << ": ";
        cin >> value;
        arr[i] = value; // Store value in the array
    }
    // Display the stored values in the array
    cout << "\nValues in the array are:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " \n";//second for loop to display values in the array
    }
    cout << endl;

    return 0;
}

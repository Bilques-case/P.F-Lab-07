#include <iostream>
using namespace std;

int main() {
    cout << "\tNumbers of hours studied by ten students\n";

    int arr[10];
    int hours;

    // Input hours for each student
    for (int i = 0; i < 10; i++) {
        cout << "Enter the number of hours studied by student " << i + 1 << ": ";
        cin >> hours;
        arr[i] = hours;
    }

    // Finding the highest number of hours studied
    int highest = arr[0];
    for (int count = 1; count < 10; count++) {
        if (arr[count] > highest) {
            highest = arr[count];
        }
    }
    // Display the highest number of hours studied
    cout << "\nThe highest number of hours studied by any student is: " << highest << endl;

    return 0;
}

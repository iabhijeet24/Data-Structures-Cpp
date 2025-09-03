// overbound is the state when the size of the array is greater than the size allocated to the array
//  and to prevent this we do a checking called overbound checking.

#include <iostream>
using namespace std;

int main() {
    int arr[50], size;

    int capacity = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter the size of the array: ";
    cin >> size;

    if (size > capacity) {
        cout << "Error: Size must be between 1 and " << capacity << "." << endl;
        return 1;
    }

    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
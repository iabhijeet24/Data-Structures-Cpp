#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
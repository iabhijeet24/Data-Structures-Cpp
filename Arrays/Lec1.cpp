#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    // Traversing the array
    for(int i = 0; i < n; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl;
    }
    return 0;
}

// --------------TRAVERSE IN AN AARAY-----------------------------

// traverse is the process of attending and updating (if needed) each elements of an array.

#include <iostream>
using namespace std;


int main() {
    int arr[50], size;
    
    cout << "Enter the size of the array: " << endl;
    cin >> size ;

    cout << "Enter the elements of the array: " << endl;
    for( int i=0; i <= size; i++)
    {
        cin >> arr[i];
    }

    cout << "Display the elements of the array: " << endl;
    for( int i=0; i <= size; i++)
    {
        cout << arr[i] << endl;
    }

    
    return 0;
}
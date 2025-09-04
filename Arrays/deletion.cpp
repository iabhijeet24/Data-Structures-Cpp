
#include <iostream>
using namespace std;

int main() {
    int i, pos;
    int arr[20] = {2, 4, 6, 8, 10, 12};
    int size = 6;
    
    cout << "Size of array: "<< size << endl;

  
    cout << "Enter the Position:" << endl;
    cin >> pos;
    
    for(i = pos; i < (size-1); i++)
    {
        arr[i] = arr[i+1];
    }
    size--;
    
    cout << "Array after deletion: "; 
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
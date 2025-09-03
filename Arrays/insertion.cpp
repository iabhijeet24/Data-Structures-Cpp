
#include <iostream>
using namespace std;

int main() {
    int i, pos, val;
    int arr[20] = {2, 4, 6, 8, 10, 12};
    int size = 6;
    
    cout << "Size of array: "<< size << endl;

  
    cout << "Enter the Position:" << endl;
    cin >> pos;
    
    cout << "Enter the value:" << endl;
    cin >> val;
    
    for(i = (size-1); i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
    size++;
    
    cout << "Array after insertion: "; 
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " "; 
    }
    cout << endl;

    return 0;
}
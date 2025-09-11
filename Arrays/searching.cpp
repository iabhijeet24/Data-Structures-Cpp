#include <iostream>
using namespace std;


int main() {
    bool found = false;
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    int key;
    
    cout << "Enter the element: " << endl;
    cin >> key;
    
    for(int i=0; i<size; i++)
    {
        if(arr[i] == key){
            found = true;
            break;
        }
        else{
            found = false;
        }
    }
    
    if(found == true){
        cout << "Element is present." << endl;
    }
    
    else{
        cout << "Not Present." << endl;
    }
    
    return 0;
}
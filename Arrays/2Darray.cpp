#include <iostream>
using namespace std;

int main() {
    int i, j;
    int row = 2, col = 2;
    int arr[2][2];
    cout << "Enter the elements in the matrix: \n" ;
    for(i=0; i<2; i++)
    {
      for(j=0; j<2; j++)
      {
          cin >> arr[i][j];
      }
    }
    
    
    cout << "DISPLAY OF ELEMENTS: \n" ;

    for(i=0; i<2; i++)
    {
      for(j=0; j<2; j++)
      {
          cout << arr[i][j] << endl;
      }
    }

    return 0;
}
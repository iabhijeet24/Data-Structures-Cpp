#include <iostream>
using namespace std;

int main() 
{
  int arr[] = {1, 3, 5, 7, 9, 15};
  int *p;
  
  p = arr;
  
  for(int i=0; i<=5; i++)
  {
      cout << arr[i] << endl;
      cout << (p+i) << endl;
      cout << &arr << endl;
      cout << (p+i) << endl;
      
  }
    return 0;
}
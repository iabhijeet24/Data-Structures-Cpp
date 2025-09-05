#include <iostream>
using namespace std;

int main() 
{
  int num, *p;
    cout << "Enter the number: " << endl;
    cin >> num;
    
    p = &num;
    cout << "The address of the variable: " <<  &num << endl;
    cout << "The address of the variable: " <<  p << endl;
    cout << "The value of the variable: " <<  num << endl;
    cout << "The value of the variable: " <<  *p << endl;
    
    return 0;
}
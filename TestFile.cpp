#include<iostream>
using namespace std;

int main()
{
  int i = 0;
  cout << "Enter a no" << endl;
  cin >> i;
  
  if((0 == i)  || (1 == i))
  {
    cout << "Entered No is: " << i << endl; // Updated as per input
  }
  return 0;
}

#include <iostream>
using namespace std;

int main ()
{

  int size;
  cout<<"Enter the size of an array :";  
  cin >> size;
  cout<<"Enter the elements of your array size : "<<size<<endl;
   int arr[100];
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }

  cout<<"The Alternate elements of an array: "<<endl;
  for (int i = 0; i < size; i = i + 2)
    {
      cout << arr[i]<<endl;
     }
}
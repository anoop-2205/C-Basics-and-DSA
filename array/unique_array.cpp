
 /*OCCURANCE OF ELEMENTS IN SINGLE TIME IN AN ARRy*/
#include<iostream>
using namespace std;

int main(){

  int size;
  cout<<"Enter the size of an array :";  
  cin >> size;
  cout<<"Enter the elements of your array size : "<<size<<endl;
  int arr[100];
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }

    int ans =0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
}
     cout<<"The Unique elements of an array:"<<ans;
    
}
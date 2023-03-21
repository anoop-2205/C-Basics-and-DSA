#include<iostream>
using namespace std;

int main()
{
  int arr[100],max,min,i,size;
  cout<<"Enter the size of array :"<<" ";
  cin>>size;
  cout<<"Enter elements of array: ";
  for(i=0;i<size;i++)
  cin>>arr[i];

  cout<<"Your array is: ";
  for(i=0;i<size;i++)
  cout<<arr[i]<<"  ";

  max=arr[0];
  min=arr[0];
  for(i=0;i<size;i++)
  if(max<arr[i])
   max=arr[i];
  else if(min>arr[i])
   min=arr[i];

  cout<<"\nMaximum element of Array: "<<max;
  cout<<"\nMinimum element of Array: "<<min;
  return 0;
}
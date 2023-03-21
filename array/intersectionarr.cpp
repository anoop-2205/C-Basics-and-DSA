#include<iostream>
using namespace std;


int main(){
    int ans;

  int size;
  cout<<"Enter the size of an array :";  
  cin >> size;
  cout<<"Enter the elements of your array size : "<<size<<endl;
  int arr1[100];
  for (int i = 0; i < size; i++)
    {
      cin >> arr1[i];
    }
    /////////////////////////////////////////////////////
    int sizes;
  cout<<"Enter the size of an array :";  
  cin >> sizes;
  cout<<"Enter the elements of your array size : "<<sizes<<endl;
  int arr2[100];
  for (int i = 0; i < sizes; i++)
    {
      cin >> arr2[i];
    }
//////////////////////////////////////////////////////////
       //vector<int>ans; 
    
    for(int i=0;i<size;i++){
        int element = arr1[i];
    
    for(int j=0;j<sizes;j++){
     if(element == arr2[j]){
       //ans.push_back(element);
        arr2[j] = -4;
        cout<<arr2[j];
        break;

     }

     }
    }
}
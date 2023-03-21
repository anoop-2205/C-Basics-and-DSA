/*#include<iostream>
using namespace std;


int main(){
   

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


    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    cout<<"size of arr1="<<n1<<endl;
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout<<"size of arr2="<<n2<<endl;

    // Find intersection of two arrays
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
               
            }
        }
        
    }
   return 0;
     
}*/
#include<iostream>
using namespace std;
int main(){


    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};

    int size1 = (sizeof(arr1))/(sizeof(arr1[0]));
    cout<<"size of arr1="<<size1<<endl;
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout<<"Intersection of arrays: ";

    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            if(arr1[i] == arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }

    return 0;
}

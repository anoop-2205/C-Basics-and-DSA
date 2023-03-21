#include <iostream>
using namespace std;


void reverse(int arr[],int n){
    
    int start =0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++,
        end--;
    }
}


//void printArray(int array[],int n){
   





int main()
{
    int array[100];
    cout<<"Enter the size of an Array : ";
    int size;
    cin>>size;
    cout<<"Enter the elements of your array size : "<<size<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    
        reverse(array,size);
        
        cout<<"THE REVERSE OF YOUR ARRAY IS:"<<endl;
        //printArray(array,size);
        for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
        cout<<endl;
    }



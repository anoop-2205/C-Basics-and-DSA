#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of an array :";
    cin>>size;
    cout<<"Enter the elements of your array size : "<<size<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The Array which is you Entered : ";
    for(int i=0;i<size;i++){
        cout<<arr[i] <<" ";
    }


}
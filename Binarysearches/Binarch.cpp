// Binary search works in only monotonic function (increasing or decreasing order!)

#include<iostream>
using namespace std;


int Binarysecrch(int arr[],int size ,int key  ){
   int start=0;
   int end=size-1;
   int mid=((start+end)/2);
   // int mid=start+(end-start)/2;
   while(start<=end){
    
        if(arr[mid]==key){
            return mid;
        }
        // right part!
        if(key>arr[mid]){
          start=mid+1;
          }else{
            end=mid-1;
          }
        mid=(start+end)/2;
            
   }
   return -1;
}

int main(){
    //int key;
    //cin>>key;
    int arr[8]={3,5,8,11,19,31,56,77};
    int index=Binarysecrch(arr,8,11);
    cout<<"index of element is ="<<index;

}
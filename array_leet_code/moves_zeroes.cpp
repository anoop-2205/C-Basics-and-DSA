#include<iostream>
using namespace std;


int main(){
    int arr[6]={1,0,4,0,9,0};
     int size = (sizeof(arr))/(sizeof(arr[0]));
     cout<<size;
    int i=0 , j;
    for(int j=0;i<size;j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
         
    }
    for(int i=0;i<size;i++){
        cout<<arr[j]<<" ";  
     
        
    }
    
}

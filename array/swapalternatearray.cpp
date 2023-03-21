#include <iostream>
using namespace std;


void printArray(int array[],int n){
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
        cout<<endl;
    }
}

void swapAlternate(int array[],int size){
    for(int i=0;i<size;i=i+2){
        if(i+1<size){
            swap(array[i],array[i+1]);
        }
    }
    
}

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
        
        swapAlternate(array,size);
        cout<<"Alternate element reverse of your array :"<<endl;
        printArray(array,size);

} 
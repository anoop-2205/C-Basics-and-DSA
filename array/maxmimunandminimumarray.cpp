/*--------print the maximum and minimum value of an array!  -------------------*/

#include<iostream>
using namespace std;

int getMax(int num[],int n){
    int max = INT8_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }

    }
    return max;
}
int getMin(int num[],int n){
    int min = INT8_MAX;
    for(int i=0;i<n;i++){
        if(num[i]>min){
            min=num[i];
        }

    }
    return min;
}

int main(){
     int size;
     cin>>size;
     int num[100];
     //Taking Input In An Array!
     for(int i=0;i<size;i++){
        cin>>num[i];
     }
    /* cout<<"printing the given array:","" ;
     for(int i=0;i<size;i++){
     cout<<num[i]<<"  ";
     }*/
     cout<<"maximum value is "<<getMax(num,size)<<endl;
     cout<<"mainimun value is "<<getMin(num,size)<<endl;

     
}
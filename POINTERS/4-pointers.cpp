#include<iostream>
using namespace std;

int main(){
    int arr[10]={23,122,41,67};

    int temp[10];
    cout<<sizeof(temp)<<endl;
    cout<<sizeof(* temp)<<endl;

    int*ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(*ptr)<<endl;
    cout<<sizeof(&ptr)<<endl;
}
#include<iostream>
using namespace std;

int main(){
    int arr[10]={9,1,7,6 ,6,7,8,9};
    cout<<"Adress of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Adress of first memory block is "<<&arr[0]<<endl;

   cout<<"4th is ->"<<*arr<<endl;
   cout<<"4th is ->"<<arr<<endl;
   cout<<"4th is ->"<<*arr+1<<endl;
   cout<<"4th is ->"<<arr+1<<endl;

   cout<<"5th is ->"<<*arr<<endl;
   cout<<"6th is ->"<<*arr+1<<endl;
   cout<<"7th is ->"<<*(arr+1)<<endl;
   cout<<"8th is ->"<<*(arr)+1<<endl;

   int i=3;
   cout<<i[arr]<<endl;
}

// arr[i]=*(arr+i)==i[arr]=*(i+arr);
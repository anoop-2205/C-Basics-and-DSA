#include<iostream>
using namespace std;

int main(){

    int num=5;
    cout<<num<<endl;
    cout<<"adress of num is "<<&num<<endl;
    int*ptr=&num;
    cout<<"value is  "<<ptr<<endl;
    cout<<"value is  "<<*ptr<<endl;
    

    double d=4.3;
    double*p2=&d;

    cout<<"Adress is:"<<p2<<endl;
    cout<<"value is   "<<*p2<<endl;

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is "<<sizeof(p2)<<endl;
}
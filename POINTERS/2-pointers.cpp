#include<iostream>
using namespace std;

int main(){
    //int*p=0;
//cout<<*p<<endl;
    //return 0;

    int i=5;
    int*q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;
     cout<<&q<<endl;

    int*p=0;
    p=&i;

    cout<<p<<endl;
    cout<<*p<<endl;

    int num=5;
    int a=num;
    a++;
    cout<<num<<endl;
    int *pt=&num;
    cout<<"Before->"<<num<<endl;
    (*pt)++;
    cout<<"After->"<<num<<endl;

    int*qw=pt;
    cout<<pt<<"-"<<qw<<endl;
    cout<<*pt<<"-"<<*qw<<endl;

    return 0;
}
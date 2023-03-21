#include<iostream>
using namespace std;


int main(){

    cout<<"Inut thew number n  :";
    int n;
    cin>>n;
    int fact = 1;
     
     for(int i = 1 ; i<=n; i++ ){
        fact=fact*i;
     }
     
     cout<<"Factorial of given number is : "<<fact<<endl;

}
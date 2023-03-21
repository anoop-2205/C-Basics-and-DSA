#include<iostream>
using namespace std;

int factorial(){
    int n;
    cin>>n;
    int fact = 1;
     
     for(int i = 1 ; i<=n; i++ ){
        fact=fact*i;
     }
     return fact;
}

int main(){
    cout<<factorial( )<<endl;
} 
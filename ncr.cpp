#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
     
     for(int i = 1 ; i<=n; i++ ){
        fact=fact*i;
     }
     return fact;
}

int nCr(){
    int n ,r;
    cin>>n>>r;
    int num = factorial(n);
    int denominator = factorial(r)*factorial(n-r);
    int ans=num/denominator;
    return ans;
}

int main(){
    
    
    cout<<"answer is:"<<nCr( )<<endl;
}
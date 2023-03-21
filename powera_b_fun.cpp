#include<iostream>
using namespace std;

int power(){
    int ans=1;
    int a,b;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
return ans;
}

int main(){
     cout<<"enter the 1st number:"<<endl;
     cout<<power( )<<endl;
     cout<<"enter the 2nd number:"<<endl;
     cout<<power( )<<endl;
     cout<<"enter the 3rd number:"<<endl;
     cout<<power( )<<endl;
    
    
    return 0;
}
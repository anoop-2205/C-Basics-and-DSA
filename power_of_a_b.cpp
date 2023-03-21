#include<iostream>
using namespace std;

int main(){
    int a ,b,ans=1;
    cin>>a>>b;
    for(int i=1;i<=b;i++){
        ans=ans*a;

    }
    cout<<"Answer is"<<ans<<endl;
    return 0;
}
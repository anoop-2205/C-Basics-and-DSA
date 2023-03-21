#include<iostream>
using namespace std;

bool checkPalindrome(string str,int i,int j){
    if(i>j)
    return true ;
    if(str[i]!=str[j])
    return false;
    else{
        return checkPalindrome(str,i+1,j-1);
    }



}

int main(){

string name="noon";
cout<<endl;



    bool ispalindrome= checkPalindrome(name,0,name.length()-1);
    if(ispalindrome){
        cout<<" The string is a palindrome "<<endl;
        }
        else{
            cout<<" The string is not a palindrome "<<endl;
        }
        cout<<endl<<endl;
        return 0;
}
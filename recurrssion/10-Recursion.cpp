///////////////////Linear search!!!!!!!!!!!!//////////
#include<iostream>

using namespace std; 


bool linearsearch(int arr[],int size,int k){
        //base case
        if(size==0) 
            return false;

            if(arr[0]==k){
                return true;
            }

        else{
            bool remainingPart = linearsearch(arr+1,size-1,k);
            return remainingPart;
        }    
    }

int main(){

    int arr[5]={3,5,1,2,6};
    int size =5;

    int key=2;
     bool ans = linearsearch(arr,size,key);
    if(ans==true){
        cout<<"Found"<<endl;
        }
        else{
            cout<<"Not found"<<endl;
            }

    return 0;

}
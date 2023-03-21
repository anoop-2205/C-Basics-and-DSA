#include<iostream>

using namespace std;

bool BinarySearch(int arr[],int s,int e,int k){
    if(s>e)
    return false;

    int mid=(s+e)/2;

    if(arr[mid]==k)
    return true;



    if(arr[mid]<k){
        return BinarySearch(arr,mid+1,e,k);
    }
    else{
    return BinarySearch(arr,s,mid-1,k);
    }
}
    



int main(){

    int arr[6]={2,4,6,10,14,18};
    int size=6;
    int key=18;

  bool ans = BinarySearch(arr,0,5,18);
    if(ans==true){
        cout<<"Found"<<endl;
        }
        else{
            cout<<"Not found"<<endl;
            }

    return 0; 

}
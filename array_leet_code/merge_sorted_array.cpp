#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[],int n,int brr[],int m,int arr_ans[]){
    int i=0,j=0,k=0;
    while(i<n&&j<m){
        if (arr[i]<brr[j]){
            arr_ans[k]=arr[i];
            k++;
            i++;
        }
    else{
      arr_ans[k]=brr[j];
      k++;
      j++;  
    }
    } 
    while(i<n){
        arr_ans[k]=arr[i];
        k++;
        i++;

    } 
    while(j<m){
        brr[k]=brr[j];
        k++;
        j++;
    }
}



void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<< ans[i]<<" ";
    }
    cout<<endl;
}


int main(){

int arr[5]={2,4,6,8,10};
int brr[5]={1,3,5,7,9};


int arr_ans[10]={0};

merge(arr,5,brr,5,arr_ans);
print(arr_ans,10);

return 0;
}
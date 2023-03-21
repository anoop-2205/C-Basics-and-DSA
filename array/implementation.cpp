 #include<iostream>
 using namespace std;

 int main(){

    int arr[15]={2,7};
    int n=15;
    cout<<"Printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    cout<<endl<<endl;
  
    cout<<  "Array2"<<endl<<endl;//------------------------------------------------------------
     int array[10]={0};
     n=10;
     for(int i=0;i<n;i++){
        cout<<array[i]<<" "<<endl<<endl;
     }

 

 cout<<"Array---3"<<endl<<endl;//------------------------------------------------------------
 int arrays[10]={[0]=1};
     n=10;
     for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
     }
 }

//                          ELEMENTS WHICH OCCURED MULTIPLE TIME IN AN ARRAY:

#include<iostream>
using namespace std;
int main(){
int size;
cout<<"Enter the size of an array :";
cin >> size;
cout<<"Enter the elements of your array: "<<endl;
int arr[100];
for (int i = 0; i < size; i++){
    cin >> arr[i];
}

for(int i=0; i<size; i++){
    for(int j=i+1; j<size; j++){
        if(arr[i] == arr[j]){
            cout<<"Duplicate element: "<<arr[i]<<endl;
        }
    }
}

return 0;

}




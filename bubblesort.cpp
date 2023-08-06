#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,1,1,1,10,5,20,10,30,20,5,5,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 1; i<size; i++){

        for(int j = 0; j<size; j++){
            if(arr[j]> arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
    for(auto element: arr){
        cout<<element<<" ";
    }
}
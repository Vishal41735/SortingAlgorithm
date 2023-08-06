#include<iostream>
using namespace std;
int main(){
        int arr[] = {10,5,200,30,50,20,10,20,3};
        int size  = sizeof(arr)/ sizeof(arr[0]);
        for(int i = 0; i<size; i++){
            int temp = arr[i];
            int j = i-1;
            for( ; j>=0; j--){
                 if(arr[j]>  temp){
                    arr[j+1] = arr[j];
                 }
                 else{
                    break;
                 }
            }
            
        }
        arr[j+1] = arr[j];

    
    }
    for(auto element: arr){
        cout<<arr[element]<<" ";

}
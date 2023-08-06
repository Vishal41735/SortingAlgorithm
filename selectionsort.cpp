



// this is selection sort algorith
#include<iostream>
using namespace std;
int main(){
    int arr[] = {64,25,12,22,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<size; i++){
        int minindex = i;

        for(int j = i+1; j<size; j++){
            if(arr[j] < arr[minindex]){
                minindex = j;
            }

        }
        swap(arr[minindex], arr[i]);
    }
        for(auto element:arr){
            cout<<element<<"  ";
        }
 


}
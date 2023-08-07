#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

void countsort(vector<int> &v){
            int n = v.size();
            // first we find the maximum element in this  array
            int max_ele = INT_MIN;
            for(int i = 0; i<n; i++ ){
                max_ele = max(v[i], max_ele);
                
            }
            // now create frequency array
            vector<int> freq(max_ele+1, 0);
            for(int i = 0; i<n; i++){
                freq[v[i]]++;
            }
            // now calculate commulative frequency
            for(int i = 1; i<=max_ele; i++){
                freq[i] = freq[i] + freq[i-1];
            }


            // and than calculate Sorted array

            vector<int> ans(n);
            for(int i = n-1; i>= 0; i--){
                ans[--freq[v[i]]] = v[i];
            }

            // and copy back to the answer in the array
            for(int i = 0; i<n; i++){
                v[i] = ans[i];
            }





}

int main(){

    int n ;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];


    }
    countsort(a);
     for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";

     }cout<<endl;

}
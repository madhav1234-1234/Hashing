// Longest subarray with given sum

// Naive solution.

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     // int arr[]={5,8,-4,-4,9,-2,2};
//     // int sum=0;
//     int arr[]={3,1,0,1,8,2,3,6};
//     int sum=5;
//     int res=0;
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         int csum=0;
//         for(int j=i;j<n;j++){
//             csum+=arr[j];
//             if(csum==sum){
//                 res=max(res,j-i+1);
//             }
//         }
//     }
//     cout<<res;
// }

// Optimised solution.
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>mp;
    // int arr[]={3,1,0,1,8,2,3,6};
    // int sum=5;
    int arr[]={5,8,-4,-4,9,-2,2};
    int sum=0;
    int n=sizeof(arr)/sizeof(int);
    int psum=0,res=0;
    for(int i=0;i<n;i++){
        psum+=arr[i];
        if(psum==sum){
            res=i+1;
        }
        if(mp.find(psum-sum)!=mp.end()){
            res=max(res,i-mp[psum-sum]);
        }
        mp.insert({psum,i});
    }
    cout<<res;
}

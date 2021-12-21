// // Longest subarray with egual number of 0s and 1s.

// // Naive soluttion.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,0,1,1,1,0,0};
//     int n=sizeof(arr)/sizeof(int);
//     int res=0;
//     for(int i=0;i<n;i++){
//         int c0=1,c1=1;
//         for(int j=i;j<n;j++){
//             if(arr[j]==0){
//                 c0++;
//             }else{
//                 c1++;
//             }
//             if(c0==c1){
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
    int arr[]={1,0,1,1,1,0,0};
    int n=sizeof(arr)/sizeof(int);
    int res=0;
    for(int i=0;i<n;i++){
         
    }
}
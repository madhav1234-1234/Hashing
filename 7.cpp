// Largest consecutive subsequences.

// Naive solution.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={1,9,3,4,2,20,8,6,7,10};
//     int n=sizeof(arr)/sizeof(int);
//     sort(arr,arr+n);
//     int count=1;
//     int ans=1;
//     // 1,2,3,4,9,20
//     for(int i=1;i<n;i++){
//         if(arr[i]==arr[i-1]+1){
//             count++;
//         }else{
//             ans=max(ans,count);
//             count=1;
//         }
//     }
//    ans=max(ans,count);
//     cout<<ans;
    
// }

// Optimised solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,9,3,4,2,20};
    int n=sizeof(arr)/sizeof(int);
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)!=s.end()){
            int curr=1;
            while(s.find(arr[i]+curr)!=s.end()){
                curr++;
            }
            res=max(res,curr);
        }
    }
    cout<<res+1;
}
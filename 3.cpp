// // Print repeating element

// // Naive solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={10,8,10,7,7,6,6};
//     int n=sizeof(arr)/sizeof(int);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             if(arr[i]==arr[j]){
//                 cout<<arr[i]<<" ";
//                  break;
//             }
//         }
//     }
// }

// Optimised solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={10,8,10,7,7,6,6};
    int n=sizeof(arr)/sizeof(int);
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])!=s.end()){
            cout<<arr[i]<<" ";
        }
        s.insert(arr[i]);
    }
}
// // // Print distinct element

// // // Naive solution
// // #include <bits/stdc++.h>
// // using namespace std;
// // int main(){
// //     int arr[]={4,8,5,8,7,5};
// //     int n=sizeof(arr)/sizeof(int);
// //     for(int i=0;i<n;i++){
// //         bool flag=true;
// //         for(int j=0;j<i;j++)
// //            if(arr[i]==arr[j]){
// //                flag=false;
// //                break;
// //            }
// //         if(flag==true){
// //             cout<<arr[i]<<" ";
// //         }   
// //     }
// // }

// // Optimized solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={4,8,5,8,7,5};
//     int n=sizeof(arr)/sizeof(int);
//     unordered_set<int>s;
//     for(int i=0;i<n;i++){
//         s.insert(arr[i]);
//     }
//     for(int x:s){
//         cout<<x<<" ";
//     }
//     // But the problem is the element can be in any order
// }

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,8,5,8,7,5};
    int n=sizeof(arr)/sizeof(int);
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end()){
            cout<<arr[i]<<" ";
        }
        s.insert(arr[i]);
    }
}

// Subarray with zero sum
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,4,13,-3,-10,5};
//     int n=sizeof(arr)/sizeof(int);
//     bool flag=true;
//     for(int i=0;i<n;i++){
//         int csum=0;
//         for(int j=i;j<n;j++){
//             csum+=arr[j];
//             if(csum==0){
//                 cout<<"yes";
//                 flag=false;
//             }
//         }
//     }
//     if(flag==true){
//         cout<<"No";
//     }
// }

// Optimised solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,4,13,-3,-10,5};
    int n=sizeof(arr)/sizeof(int);
    bool flag=true;
    unordered_set<int>s;
    int psum=0;
    for(int i=0;i<n;i++){
        psum+=arr[i];
        if(s.find(psum)!=s.end()){
            cout<<"true";
            flag=false;
            break;
        }
        if(psum==0){
            cout<<"true";
            flag=false;
            break;
        }
        s.insert(psum);
    }
    if(flag==true){
        cout<<"NO";
    }
}
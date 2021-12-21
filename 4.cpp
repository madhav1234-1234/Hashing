// // Pair in an unsorted array
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={3,2,8,15,-8};
//     int n=sizeof(arr)/sizeof(int);
//     int sum=897;
//     bool flag=true;
//     for (int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==sum){
//                 cout<<"YES";
//                 flag=false;
//                 break;
//             }
//         }
//     }
//     if(flag==true){
//         cout<<"NO";
//     }
// }

// Optimised solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={3,2,8,15,-8};
    int n=sizeof(arr)/sizeof(int);
    int sum=17;
    bool flag=true;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(sum-arr[i])!=s.end()){
            cout<<"Yes"<<" ";
            flag=false;
            break;
        }
        s.insert(arr[i]);
    }
    if(flag==true){
        cout<<"No";
    }
}
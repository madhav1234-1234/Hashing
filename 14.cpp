// Subarray with given sum


//Naive solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[]={5,8,6,13,3,-1};
//     int n=sizeof(arr)/sizeof(int);
//     int sum=22;
//     bool flag=false;
//     for(int i=0;i<n;i++){
//         int csum=0;
//         for(int j=i;j<n;j++){
//             csum+=arr[j];
//             if(csum==sum){
//                 cout<<"true";
//                 flag=true;
//                 break;
//             }
//         }
//     }
//     if(flag==false){
//         cout<<"false";
//     }
// } 

// // M-1 Window sliding technique

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// //    int arr[]={5,8,6,13,3,-1};
//    int arr[]={3,2,5,6};
// //    int sum=22;
//    int sum=10;
//    int n=sizeof(arr)/sizeof(int);
//    int csum=arr[0];
//    bool flag=true;
//    int s=0;
//    for(int e=1;e<n;e++){
//        while(csum>sum && s<e-1){
//            csum-=arr[s];
//            s++;
//        }
//        if(csum==sum){
//            cout<<"true";
//            flag=false;
//            break;
//        }
//         csum+=arr[e];
//    }
//    if(flag==true){
//        cout<<"no";
//    }
// }


// M-2 UNORDDERED MAP
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,8,6,13,30,-1};
    int n=sizeof(arr)/sizeof(int);
    int sum=22;
    unordered_set<int>s;
    bool flag=false;
    int psum=0;
    for(int i=0;i<n;i++){
        psum=psum+arr[i];
        if(s.find(psum-sum)!=s.end()){
               cout<<"true";
               flag=true;
               break;
        }
        s.insert(psum);
    }
    if(flag==false){
        cout<<"false";
    }
    
}
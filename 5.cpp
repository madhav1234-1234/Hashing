// // Intersection of two unsorted array.

// // Naive solution
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a[]={10,20};
//     int b[]={20,30};
//     int n1=sizeof(a)/sizeof(int);
//     int n2=sizeof(b)/sizeof(int);
//     bool flag=true;
//     for(int i=0;i<n1;i++){
//        for(int j=0;j<n2;j++){
//            if(a[i]==b[j]){
//                cout<<a[i]<<" ";
//                flag=false;
//            }
//        }
//     }
//     if(flag==true){
//         cout<<"no intersection";
//     }
// }

// Optimised solution
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,15,20,25,30,50};
    int b[]={30,5,15,80};
    // int a[]={10,20};
    // int b[]={20,30};
    int n1=sizeof(a)/sizeof(int);
    int n2=sizeof(b)/sizeof(int);
    unordered_set<int>s;
    for(int i=0;i<n1;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        if(s.find(b[i])!=s.end()){
            cout<<b[i]<<" ";
        }
    }
}
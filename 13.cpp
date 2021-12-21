// // Union of two unsorted array

// // Naive solution.
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int a[]={15,20,5,15};
//     int n1=sizeof(a)/sizeof(int);
//     int b[]={15,15,15,20,10};
//     int n2=sizeof(b)/sizeof(int);
//     int c[n1+n2];
//     for(int i=0;i<n1;i++){
//        c[i]=a[i];
//     }
//     for(int i=0;i<n2;i++){
//         c[n1+i]=b[i];
//     }
//     int ans=0;
//     for(int i=0;i<n1+n2;i++){
//         bool flag=true;
//         for(int j=0;j<i;j++){
//             if(c[i]==c[j]){
//                 flag=false;
//                 break;
//             }
//         }
//         if(flag==true){
//             ans++;
//         }
//     }
//     cout<<ans;
// }

// Optimised solution
#include<bits/stdc++.h>
using namespace std;
int main(){
   int a[]={15,20,5,15};
    int n1=sizeof(a)/sizeof(int);
    int b[]={15,15,15,20,10};
    int n2=sizeof(b)/sizeof(int);    
    unordered_set<int>s;
    for(int i=0;i<n1;i++){
       s.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        s.insert(b[i]);
    }
    cout<<s.size();
}


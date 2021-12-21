//Unordered-set
#include <bits/stdc++.h>
using namespace std;
int main(){
     unordered_set <int> s;
     s.insert(10);
     s.insert(15);
     s.insert(20);
     for(int x:s){
         cout<<x<<" ";
     }
     cout<<endl;
     for(auto it=s.begin();it!=s.end();it++){
         cout<<*it<<" ";
     }
     cout<<endl;
    //  cout<<s.size()<<endl;
    //  s.clear();
    //  cout<<s.size();
    if(s.find(15)==s.end()){
        cout<<"Not found";
    }else{
        cout<<"found";
    }
    cout<<endl;
    if(s.count(15)){
        cout<<"found";
    }
    

} 
#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int>s;
    int b,t,x;
    cin>>b;
    vector<int>v;
    while(b){
        t=b%10;
        b=b/10;
        v.push_back(t);
         x=v.size();
         
    }
    for(auto i:v){
        s.insert(i);
    }
    int y=s.size();
    if (x==y){
        cout<<"Unique Number";
    }
    else{
        cout<<"Not Unique Number";
    }
return 0;        
   
}
    
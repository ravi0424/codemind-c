#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    set<int> c;
    for(auto i:b){
        c.insert(i);
    }
    int n=sizeof(b)/sizeof(b[0]);
    int  cou=0;
    vector<int> e;
    for (auto i:c){
        int s=count(b,b+n,i);
        if(s==1){
            cou+=1;
            e.push_back(i);
        }
    }
    if(cou==0){
        cout<<-1;
    }
    else{
    for(auto i:e){
        cout<<i<<" ";
    }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    vector<int> e;
    for(auto i:b){
        e.push_back(i);
    }
    int temp=0;
    for(auto it:e){
        if(count(e.begin(),e.end(),it)==1){
            temp=it;
            break;
        }
    }
    cout<<temp;
}
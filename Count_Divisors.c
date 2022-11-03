#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int co=0;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            co+=1;
        }
    }
    cout<<co;
}
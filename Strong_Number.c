#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    int t=1;
    for(int i=a;i!=0;i--){
        t=t*i;
    }
    return t;
}
int main(){
    int a;
    cin>>a;
    int x=a;
    int s=0;
    int t;
    while(a){
        t=a%10;
        a=a/10;
        s=s+(fact(t));
    }
    if (x==s){
        cout<<"The number "<<x<<" is a strong number";
    }
    else{
        cout<<"The number "<<x<<" is not a strong number";
    }
}

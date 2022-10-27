#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int s=0;
    int b=a;
    int t=0;
    a=a*a;
    while (a){
        t=a%10;
        s=s+t;
        a=a/10;
    }
    if (b==s){
        cout<<"Neon Number";
    }
    else{
        cout<<"Not Neon Number";
    }
}
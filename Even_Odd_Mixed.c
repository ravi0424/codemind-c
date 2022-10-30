#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int e=0;
    int o=0;
    int t=0;
    while (a){
        t=a%10;
        if(t%2==0){
            e=e+1;
        }
        else{
            o=o+1;
        }
        a=a/10;
    }
    if(e==0){
        cout<<"Odd";
    }
    else if(o==0){
        cout<<"Even";
    }
    else{
        cout<<"Mixed";
        
    }
}
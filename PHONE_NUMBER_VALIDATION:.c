#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int t=0;
    int c=0;
    while (a){
        t=a%10;
        a=a/10;
        c+=1;
    }
    if(t==0){
        cout<<"Invalid";
    }
    else if(c!=10){
        cout<<"Invalid";
    }
    else{
        cout<<"Valid";
    }
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int t=0;
    int c=0;
    while (a){
        t=a%10;
        if (t>c){
            c=t;
        }
        a=a/10;
    }
    cout<<c;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int s=0;
    int m=1;
    int t=0;
    while(a){
        t=a%10;
        s=s+t;
        m=m*t;
        a=a/10;
    }
    cout<<(m-s);
}
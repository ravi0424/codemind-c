#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    float s=0;
    for(int i=1;i<=a;i++){
        s=s+(1.0/i);
    }
    cout<<fixed<<setprecision(2)<<s;
}
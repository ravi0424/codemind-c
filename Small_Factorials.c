#include<bits/stdc++.h>
using namespace std;
int method1(int a){
    int r=1;
    for(int i=a;i!=0;i--){
        r*=i;
    }
    return r;
}
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        cout<<method1(b)<<endl;
    }
}
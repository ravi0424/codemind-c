#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int s=0;
    for(int i=1;i<(int(pow(a,0.5))+1);i++){
        if (a%i==0){
            s=s+1;
        }
    }
    if (s==1){
        cout<<"prime";
    }
    else{
        cout<<"not a prime";
    }
}
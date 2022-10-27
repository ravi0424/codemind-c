#include<bits/stdc++.h>
using namespace std;
int prime(int a){
    if(a==1){
        return 0;
    }
    else{
        for(int i=2;i<(int(pow(a,0.5))+1);i++){
            if(a%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int count=0;
    for (int i=a;i<b+1;i++){
        if (prime(i)){
            count=count+1;
        }
    }
    cout<<count;
}
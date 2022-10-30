#include<bits/stdc++.h>
using namespace std;
int rever(int a)
{
    int rev=0;
    int temp=0;
    int b=a;
    while (a)
    {
        temp=a%10;
        rev=(rev*10)+temp;
        a=a/10;
    }
    if(b==rev){
        return 1;
    }
return 0;
}
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
    while(1){
        a=a+1;
        if(prime(a)){
            if(rever(a)){
                break;
            }
        }
    }
    cout<<a;
}
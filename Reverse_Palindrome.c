#include<bits/stdc++.h>
using namespace std;
int ispalin(int a){
    int b=a;
    int rev=0;
    int temp=0;
    while (a)
    {
        temp=a%10;
        rev=(rev*10)+temp;
        a=a/10;
    }
    if (b==rev){
        return 1;
    }
    else{
        return 0;
    }
}
int rev(int a){
    int rev=0;
    int temp=0;
    while (a)
    {
        temp=a%10;
        rev=(rev*10)+temp;
        a=a/10;
    }
    return rev;
}
int main(){
    int a;
    cin>>a;
    while(1){
        a=a+rev(a);
        if(ispalin(a)){
            break;
        }
    }
    cout<<a;
    
}
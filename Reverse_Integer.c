#include<bits/stdc++.h>
using namespace std;
int rever(int a){
    int temp=0;
    int rev=0;
    while (a){
        temp=a%10;
        rev=rev*10+temp;
        a=a/10;
    }
    return rev;
}
int main()
{
    int a;
    cin>>a;
    int b=a;
    if(a<0){
        a=a/-1;
    }
    int c=rever(a);
    if(b>0){
        cout<<c;
    }
    else{
        c=c/-1;
        cout<<c;
    }
}
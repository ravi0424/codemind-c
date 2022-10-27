#include<bits/stdc++.h>
using namespace std;
int rever(int a)
{
    int rev=0;
    int b=a;
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
    return 0;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    for(int i=a;i<b;i++){
        if (rever(i)){
            cout<<i;
            cout<<" ";
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int method(int a)
{
    int t=0;
    int s=0;
    while (a)
    {
        t=a%10;
        s=s+pow(t,2);
        a=a/10;
    }
    return s;
}
int main()
{
    int a;
    cin>>a;
    a=method(a);
    while (a>9)
    {
        a=method(a);
    }
    if(a==1){
        cout<<"True";
    }
    else if(a==7){
        cout<<"True";
        
    }
    else
    {
        cout<<"False";
    }
}
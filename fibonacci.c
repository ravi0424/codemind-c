#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int b[a];
    int temp=0;
    int c=0;
    int d=1;
    b[0]=0;
    b[1]=1;
    for(int i=2;i<a;i++)
    {
        temp=c+d;
        c=d;
        d=temp;
        b[i]=temp;
    }
    for(auto it:b)
    {
        cout<<it;
        cout<<" ";
    }
}
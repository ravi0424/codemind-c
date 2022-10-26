#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int temp=0;
    int c=0;
    int d=1;
    int e=0;
    for(int i=2;temp<a;i++)
    {
        temp=c+d;
        c=d;
        d=temp;
        if (temp==a)
        {
            e=1;
        }
    }
    if (e==1)
    {
        cout<<"True";
    }
    
    else
    {
        cout<<"False";
    }
    
}
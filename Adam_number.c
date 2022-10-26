#include<bits/stdc++.h>
using namespace std;
int rever(int a)
{
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
int main()
{
    int a;
    cin>>a;
    int b=pow(a,2);
    int c=rever(a);
    int d=pow(c,2);
    int e=rever(d);
    if (e==b)
    {
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}
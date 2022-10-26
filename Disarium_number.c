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
    int c=a;
    int b=0;
    b=rever(a);
    int temp=0;
    int s=0;
    int i=1;
    while(b)
    {
        temp=b%10;
        s=s+pow(temp,i);
        b=b/10;
        i=i+1;
    }
    if (s==c)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
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
    if (b==rev){
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int a;
    cin>>a;
    int g=a;
    int l=a;
    while (1){
        g=g+1;
        if (rever(g)){
            break;
        }
    }
    while (1){
        l=l-1;
        if (rever(l)){
            break;
        }
    }
    if ((g-a)==(a-l)){
        cout<<l;
        cout<<" ";
        cout<<g;
    }
    else if((g-a)<(a-l)){
        cout<<g;
    }
    else{
        cout<<l;
    }
}
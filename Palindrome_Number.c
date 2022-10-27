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
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int b;
        cin>>b;
        if (ispalin(b)){
            cout<<"True"<<endl;
        }
        else{
            cout<<"False"<<endl;
        }
    }
}
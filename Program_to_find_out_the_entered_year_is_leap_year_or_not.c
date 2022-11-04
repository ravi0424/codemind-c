#include<bits/stdc++.h>
using namespace std;
int islp(int a){
    if(a%400==0)
        return 1;
    if(a%100==0)
        return 0;
    if(a%4==0)
    return 1;
    return 0;
}
int main(){
    int a;
    cin>>a;
    if(islp(a))
    cout<<"True";
    else{
        cout<<"False";
    }
}
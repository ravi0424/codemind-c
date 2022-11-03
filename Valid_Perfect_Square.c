#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int k=0;k<a;k++){
        int b;
        cin>>b;
        int i=1;
        int c=0;
        while(i*i<=b){
            if(i*i==b){
                c+=1;
                cout<<"True"<<endl;
                break;
            }
            i+=1;
        
        }
        if(c==0){
            cout<<"False"<<endl;
        }
    }
}
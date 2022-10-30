#include<bits/stdc++.h>
using namespace std;
int method(int a){
    int b=a%10;
    if(b==2){
        return 1;
    }
    else if(b==3){
        return 1;
    }
    else if(b==9){
        return 1;
    }
    return 0;
}
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int a,b;
        cin>>a>>b;
        int c=0;
        for(int j=a;j<=b;j++){
            if(method(j)){
                c=c+1;
            }
            
        }
        cout<<c<<endl;
    }
}
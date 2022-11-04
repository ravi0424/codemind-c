#include<bits/stdc++.h>
using namespace std;
int operate(int array[], int N)
{
    int sum = 0, index = 0;
 
label:
    sum += array[index++];
 
    if (index < N) {
        goto label;
    }
    cout<<sum;
}
int main(){
    int a;
    cin>>a;
    int b[a];
    for(int i=0;i<a;i++){
        cin>>b[i];
    }
    operate(b,a);
    
}
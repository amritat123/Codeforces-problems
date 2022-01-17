#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin>>n>>h;
    int count=0;
    int i;
    while(n){
        cin>>i;
        if(i>h){
            count=count+2;
        }
        else{
            count+=1;
        }
        n--;
    }
    cout<<count;
    return 0;
}

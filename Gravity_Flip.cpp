#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arry[num];
    for(int i=0; i<num;i++){
        cin>> arry[i];
    }
    sort(arry,arry+num);
    for( int i=0;i<num;i++){
        cout<<arry[i]<<" ";
    }
    return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main (){
    int team;
    cin>>team;
    int count=0;
    while(team){
        int a,b,c; // store result on each test for thre friends ans
        cin>>a>>b>>c;
        if (a+b==2 || b+c==2 || c+a==2){
            count=count+1;
        }
        team--;
    }
    cout<<count;
    return 0;
}
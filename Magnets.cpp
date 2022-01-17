#include<iostream>
using namespace std;
int main ()
{
    int num,count=0;
    cin>>num;
    string a[num];
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    for(int i=0;i<num;i++){
        if(a[i]!=a[i+1]) count++;
    }
    cout<<count;
    return 0;
}
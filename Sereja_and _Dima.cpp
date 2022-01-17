#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n+4];
    for(int i=0;i<n;i++)cin>>x[i];
    {
        int i=0 ,j=n-1;
        int seraja=0,dema=0;
        int turn =1;
    while (i<=j){
        if (turn%2==1)
        {
            if(x[i]<x[j]){
                seraja+=x[j];
                j--;
            }
            else{
                seraja+=x[i];
                i++;
            }
        }
        else{
            if(x[i]<x[j]){
                dema+=x[j];
                j--;
            }
            else{
                dema+=x[i];
                i++; 
            }
        }
    }
}
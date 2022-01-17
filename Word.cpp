#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int upper=0,lower=0;
    for(int i=0 ;i<str.length();i++){
        if(str[i]<97){
            upper++;
        }else{
            lower++;
        }
    }
    if (upper>lower){
        for (int i=0 ;i<str.length();i++){
            if(str[i]>=97){
                str[i]=str[i]-32;
            }
        }
    }else{
        for(int i=0;i<str.length();i++){
            if (str[i]<97){
                str[i]=str[i]+32;
            }
        }
    }
    cout<<str;
    return 0;
}
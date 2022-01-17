#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string str;
    cin>>str;
    int count_an=0,count_da=0;
    for(int i=0;i<str.length();i++){
        if (str[i]=='A'){
            count_an++;
        }
        else{
            count_da++;
        }
    }
    if (count_an>count_da){
        cout<<"Anton";
    }
    else if(count_da>count_an){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
    return 0;
}
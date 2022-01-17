#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main (){
    string str1;
    int count=0;
    cin>>str1;
    
    sort(str1.begin(),str1.end());
    for (int i =0;i<str1.size();i++){
        if (str1[i]!=str1[i+1])
        {
            count++;
        }        
    }if (count%2==0){
        cout<<"CHAT WITH HER!";
    }else{
        cout<<"IGNORE HIM!";
    }
    return 0;
}
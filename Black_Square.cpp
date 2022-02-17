#include<bits/stdc++.h>
using namespace std;

int main () {
    int first_side,
    sec_side,
    third_side,
    fourth_side;
    cin>>first_side>>sec_side>>third_side>>fourth_side;

    string store;
    cin>>store;

    int sum=0;

    //run loop
    for (int i=0; i<store.size() ; i++){
        if (store[i]=='1'){
        sum+=first_side;

        }else if (store[i]=='2'){
            sum+=sec_side;

        }else if (store[i]=='3'){
            sum+=third_side;

        }else{
            sum+=fourth_side;
        }
    }
    cout<<sum;
    return 0;
}
// #include<iostream>
// using namespace std;
// int main(){
//     int x[4],count=0;
//     for(int i=0;i<4;i++){
//         cin>>x[i];
//     }
//     for(int i=0;i<3;i++){
//         if (x[i]==x[i+1]){
//             count++;
//         }
//     }
//     cout<<count;
//     return 0;
// }
#include<bits/stdc++.h>
 #include<iostream>
using namespace std;
int main (){
    map<int,int>color;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        color[x]=x;
    }
    cout<<4-color.size()<<endl;
}



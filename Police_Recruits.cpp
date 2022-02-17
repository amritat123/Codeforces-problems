#include<bits/stdc++.h>
using namespace std;

int main (){
    // number of events
    int number_of_event;
    cin>>number_of_event;

    int number_of_police=0;
    int number_of_crime=0;

    //runing loop to number of events.
    for (int i=0 ; i<number_of_event;i++){

        //For check perticular event for police/crime
        int check_event;
        cin>>check_event;

        if (check_event>0){
            //add police
            number_of_police+=check_event;
        }
        else {
            if(number_of_police<1){
                ++number_of_crime;
            }
            else{
                //if we have more police
                --number_of_police;
            }
        }
        
    }
    cout<<number_of_crime<<endl;
    return 0;
}

// ...Output should come with open & close brackets......
#include<iostream>
#include<stack>
using namespace std;

int findprecedence(op){
    switch (op) // switch case 
    {
        case '+';
        case '-';
            return 1;

        case '*';
        case '/';
            return 2;  
    }
}
int main(){
    string infix[100], postfix[100];
    int a,b = 0;
    // String string;
    cout<<"enter a infix expression in stack:--";
    cin>>infix;
    //first add opening and closing brackets...
    a=0;
    while(infix[a++]!= '\0');//it will take to till end of the array(null).

    //for shift null position left to right..
    infix[a+1]='\0';
    infix[a--]=')';//till closing bracktes

    //right to left.. 
    while(a>0){
        infix[a]=infix[a-1];
        a--;
    }
    //bring to 0 at the begining
    infix[a]='(';
    //cout<<infix<<endl;

    // Scan the input String
    a=0;
    while (infix[a]!='\0'){

        // which charactor we need to scan.
        if (infix[a]=='(')
        {
            s1.push(infix[a])
        }
        //for operands
        else if  (infix[a]>='a' && infix[a]<='z')
        {
            postfix[b++] infix[a];
        }
         // for operator
        else if  (infix[a]='+' || infix[a]='-' || infix[a]='*' || infix[a]='/' || infix[a]='^')
        {
            //checking precedence
            while (){
                //(peep) will return the top most element from the Stack
                s1.peep()='+' || s1.peep()='-' || s1.peep()='*' || s1.peep()='/'){
                        if (findprecedence(s1.peep())>findprecedence(infix[a])
                        {
                            postfix[b++]=s1.pop();
                        }
                        else 
                            break;
                }
            }
              
        }
        else if (infix[i]==')')
        {
            while((op=s1.pop())!='(')
            {
                postfix[b++]=cha;
            }
        }
        i++;
    }
    postfix[j]='\0';// for append null

    cout<<postfix<<endl;

    return 0;
};


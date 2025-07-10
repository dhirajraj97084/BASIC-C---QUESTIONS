#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"Enetr the valu of a:";
    cin>>a;
    cout<<"Enetr the valu of b:";
    cin>>b;
    cout<<"Enetr the opretaion(+,-,*,/,%) of op:";
    cin>>op;

    switch(op){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
         cout<<"invalid charactor:";
    }
    return 0;
}
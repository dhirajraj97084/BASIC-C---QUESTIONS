#include<iostream>
using namespace std;
void EvenOrOdd(int n){
    if (n%2==0)
    {
       cout<<"Yes i am even";
    }else{
        cout<<"I am odd";
    }
    
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    EvenOrOdd(n);

    return 0;
}
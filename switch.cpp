#include<iostream>
using namespace std;
#include<math.h>
int main(){
    // //Calculator
    // int a,b;
    // char op;
    // cout<<"Enter two numbers and the operation you want to perform: "<<endl;
    // cin>>a>>b>>op;
    // switch(op){
    //     case '+':
    //         cout<<a+b<<endl;
    //         break;
    //     case '-':
    //         cout<<a-b<<endl;
    //         break;
    //     case '*':
    //         cout<<a*b<<endl;
    //         break;
    //     case '/':
    //         cout<<a/b<<endl;
    //         break;
    //     case '%':
    //         cout<<a%b<<endl;
    //         break;
    //     default:
    //         cout<<"Invalid operation"<<endl;
    // }
    // return 0;
    int amount,option;
    int d,a,b,c,e;
    cout<<"Enter the amount: "<<endl;
    cin>>amount;
    switch(1){
        case 1:{
            d=amount/100;
            cout<<"Number of 100 notes: "<<d<<endl;
        }
        case 2:{
            a=((amount-(d*100))/50);
            cout<<"Number of 50 notes: "<<a<<endl;
        }
        case 3:{
            b=((amount-(d*100+a*50))/20);;
            cout<<"Number of 20 notes: "<<b<<endl;
        }
        case 4:{
            c=((amount-(d*100+a*50+b*20))/10);
            cout<<"Number of 10 notes: "<<c<<endl;
        }
    } 
}
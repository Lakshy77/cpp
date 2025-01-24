#include<iostream>
using namespace std;
#include<math.h>
int power(int a,int b){
    int ans =1;
    for(int i=1;i<=b;i++){
        ans = ans*a;
    }
    return ans;
}
bool isEven(int a) {
    //odd
    if(a&1){
        return 0;
    }
    //even
    else{
        return 1;
    }
}
int fact(int n){
    int ans =1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}
int nCr(int n,int c){
    return (fact(n)/(fact(c)*fact(n-c)));
}
//1-prime no
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int findnthterm(int n){
   int ans = (3*n)+7;
   return ans;
}
void fib(int n){
       
   int a=0;
    int b=1;
    int sum=0;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        sum = a+b;
        cout<<sum<<" ";

        a=b;
        b=sum;
}
}
int main(){
    // int a,b;
    // cin>>a>>b;
     

    // cout<<power(a,b);
    //Odd Even
    // int num;
    // cin >> num;
    // if(isEven(num)){
    //     cout<<"Even";
    // }
    // else{
    //     cout<<"Odd";
    // }
    //nCr
    // int n,r;
    // cin>>n>>r;
    // int ans = nCr(n,r);
    // cout<<"answer is: "<<ans;
    //Prime no
    // int n;
    // cin>>n;
    // if(isPrime(n)){
    //     cout<<"Prime";
    // }
    // else{
    //     cout<<"Not Prime";
    // }

    //HW
   
    // int givenAPterm;
    // cin >> givenAPterm;
    // cout<<findnthterm( givenAPterm);
    //Fibonnaci Series
    int n;
    cout<<"Enter the no of time series to run : ";
    cin>>n;
    fib(n);
    return 0;
}
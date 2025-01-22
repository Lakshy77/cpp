/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
using namespace std;
int main(){
    // cout<< "Namaste Duniya"<<endl;
    // int a,b;
    // cin>>a;
    // cin>>b;
    // if(a>b){
    //     cout<<"a is greater than b"<<endl;
    // }
    // else{
    //     cout<<"b is greater than a"<<endl;
    // }
//     char ch;
//     cin>>ch;
//     if(ch>='A'&& ch<='Z'){
//         cout<<"This is the Upper case value:"<<ch<<endl;
//     }
//   else if(ch>='a'&&ch<='z'){
//         cout<<"this is lower case letter: "<<ch<<endl;
//     }
//     else if(ch>='0'&&ch<='9'){
// cout<<"It's an integer digit:"<<ch<<endl;
//     }
// int n,m,i=1;
// int sum=0;
// cin>>n;
// // while(n<=10){
// //     cout<<n<<endl;
// //     n++;
// // }
// // while(n<=10){
// //     sum=sum+n;
// //     n++;
// // }
// // cout<<sum;
// // while(i<=n){
// //     if(i%2==0){
// //         sum=sum+i;
// //         i++;
// //     }
// //     else{
// //         i++;
// //     }
// // }
// // cout<<sum;
// i=2;
// while(i<n){
//     if(n%i==0){
//         cout<<"not prime no for"<<i<<endl;
//     }
    
//     else{
//         cout<<"Prime Number for"<<i<<endl;
//     }
//     i++;
// }
//PATTERN PROBLEMS
// int n,m;
// cin>>n;
// cin>>m;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
//  Q-2
// int n,m;
// cin>>n;
// cin>>m;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<""<<i;
//     }
//     cout<<endl;
// }
//Q-3
// int n,m;
// cin>>n;
// cin>>m;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<""<<j;
//     }
//     cout<<endl;
// }
//Q-4
// int n,m;
// cin>>n;
// cin>>m;
// for(int i=1;i<=n;i++){
//     for(int j=n;j>=1;j--){
//         cout<<""<<j;
//     }
//     cout<<endl;
// }
// Q-5
// int n,m=1;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n;j++){
//         cout<<m<<" ";
//         m++;
//     }
//     cout<<endl;
// }
// int n,m=1;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//         m++;
//     }
//     cout<<endl;
// }
// int n,m=1;
// cin>>n;
// for(int i=1;i<=n;i++){
//     int space=n-i;
//     for(int j=space;j>=1;j--){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//         m++;
//     }
//     cout<<endl;
// }
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=n-i+1;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
int n,m=1;
cin>>n;
for(int i=1;i<=n;i++){
    int space=i-1;
    for(int j=space;j>=1;j--){
        cout<<" ";
    }
    for(int j=1;j<=n-i+1;j++){
        cout<<"*";
        m++;
    }
    cout<<endl;
}
}
#include<iostream>
using namespace std;
#include<math.h>
int main(){
    // int a=4;
    // int b=6;

    // cout<<"a&b "<<(a&b)<<endl;
    // cout<<"a|b "<<(a|b)<<endl;
    // cout<<"a^b "<<(a^b)<<endl;
    // cout<<"~a "<<(~a)<<endl;
    // cout<<(17<<1)<<endl;
    // cout<<(17>>1)<<endl;
//  //Fibonnaci series
//     int n=10;
//     int a=0;
//     int b=1;
//     int sum=0;
//     cout<<a<<" "<<b<<" ";
//     for(int i=0;i<=n;i++){
//         sum = a+b;
//         cout<<sum<<" ";

//         a=b;
//         b=sum;

//     }
//Decimal to binary No.
int n;
    cin >> n;  // Input decimal number
    int ans = 0;  // To store the binary result
    int i = 0;    // To track the position

    while (n != 0) {
        int bit = n & 1;  // Extract the least significant bit
        ans = static_cast<int>(bit * pow(10, i)) + ans;  // Use pow for positional value
        n = n >> 1;  // Right shift to process the next bit
        i++;
    }

    cout << "Answer is " << ans << endl;
    return 0;

}
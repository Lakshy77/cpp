#include <iostream>
#include<math.h>
using namespace std;

int main() {
    // int n;
    // cout << "Enter a decimal number: ";
    // cin >> n;

    // const int BITS = 8; // Number of bits for binary representation

    // if (n >= 0) {
    //     // For positive numbers, just convert to binary
    //     unsigned int binary = n;

    //     cout << "Binary representation: ";
    //     for (int i = BITS - 1; i >= 0; i--) {
    //         cout << ((binary >> i) & 1); // Extract and print each bit
    //     }
    //     cout << endl;
    // } else {
    //     // For negative numbers, compute 2's complement
    //     unsigned int twosComplement = (1U << BITS) + n;

    //     cout << "2's Complement binary: ";
    //     for (int i = BITS - 1; i >= 0; i--) {
    //         cout << ((twosComplement >> i) & 1); // Extract and print each bit
    //     }
    //     cout << endl;
    // }
    int n;
    cin >>n;
    int i=0,ans=0;
    while(n!=0){
        int digit = n%10;
        if(digit == 1){
            ans = ans +pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<ans <<endl;
    return 0;
}

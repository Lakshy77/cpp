#include<iostream>
using namespace std;


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
        
}}
int main(){
    // int arr[6]={1,4,0,5,-2,15};
    // int brr[5]={2,6,3,9,4};

    // reverse(arr,6);
    // reverse(brr,5);
    // // for(int i=n-1;i>=0;i--){
    // //     cout<<arr[i]<<" ";
    // // }
    // printArray(arr,6);
    // cout<<endl;
    // printArray(brr,5);
    int even[8] = {5,2,9,4,7,6,1,0};
    int odd[5] = {1,3,0,5,9};
     swapAlternate(even,8);
     printarray(even,8);
     swapAlternate(odd,5);
     printarray(odd,5);
    return 0;
}
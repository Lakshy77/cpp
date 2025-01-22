#include<iostream>
using namespace std;
#include<math.h>
#include<climits>
int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int getMin(int arr[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int getMax(int arr[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int getSum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    // // //declare
    // // int number[15];
    // // //accessing
    // // cout<<"Value of 15 index: "<<number[15]<<endl;
    // // int third[15]={2,7};

    // // int a = 15;
    // // // //print
    // // // for(int i=0;i<a;i++){
    // // //     cout<<"Value of "<<i<<" index: "<<third[i]<<endl;
    // // // }
    // // int thirdsize = sizeof(third)/sizeof(int);
    // // cout<<"Size of third array: "<<thirdsize<<endl;
    // // printarr(third,thirdsize);
    // char arr[3]={'a','b','c'};
    // // cout<<arr[0]<<endl;
    // for(int i=0;i<3;i++){
    //     cout<<arr[i]<<endl;
    // }
    //Min Max array
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    // int max =arr[0];
    // int min = arr[0];
    // for(int i=0;i<size;i++){
    //     if(arr[i]>max){
    //         max = arr[i];
    //     }
    //     if(arr[i]<min){
    //         min = arr[i];
    //     }
    // }
    cout<<"Max: "<<getMax(arr,size)<<endl;
    cout<<"Min: "<<getMin(arr,size)<<endl;
    cout<<"Sum: "<<getSum(arr,size)<<endl;
   
     return 0;
}
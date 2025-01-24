#include<iostream>
using namespace std;

bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main() {
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    //Wheter 1 is presentn or not
    cout<<"Enter the key to be searched: "<<endl;
    int key;
    cin>>key;
    int size = sizeof(arr)/sizeof(int);
    search(arr,size,key)?cout<<"Element is present in the array":cout<<"Element is not present in the array";
    return 0;
}
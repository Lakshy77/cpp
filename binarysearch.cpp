#include<iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int start =0;
    int end = size-1;
    int    mid = start + (end-start )/2;

    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start + (end-start )/2;
    }
    return -1;
}
int firstOcc(int arr[], int n,int key){
    int s =0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
             ans = mid;
            e = mid-1;
        }
        else if (key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }
        mid = s+(e-s)/2;

    }
    return ans;
}
int lastOcc(int arr[], int n,int key){
    int s =0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid]==key){
             ans = mid;
            s = mid+1;
        }
        else if (key > arr[mid]){
            s = mid+1;
        }
        else if(key < arr[mid]){
            e = mid-1;
        }
        mid = s+(e-s)/2;

    }
    return ans;
}
int main(){
    // int even[6]={2,4,6,8,12,18};
    // int odd[5]={3,5,11,13,16};
    
    // int index = binarySearch(even,6,20);
    // cout<<"The index of 12 is "<<index<<endl;
    //q-2
    int even[6] = {1,2,3,3,3,5};
    cout << "First Occurrence of 3 is at index:"<<firstOcc(even,6,3)<<endl;
    cout << "Last Occurrence of 3 is at index:"<<lastOcc(even,6,3)<<endl;
}
#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstOcc(arr,n,i+1,key);
}
int lastOcc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int LastIndex =lastOcc(arr,n,i+1,key);
    if(LastIndex!=-1){
        return LastIndex;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={1,3,4,2,5,4,5};
    cout<<firstOcc(arr,7,0,5)<<endl;
    cout<<lastOcc(arr,7,0,5);
    return 0;
}
// Outpu
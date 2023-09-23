#include<iostream>
using namespace std;
bool isSorted(int arr[],int size){
    if(size==0||size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;

    }
    else{
        int RemainingPart=isSorted(arr+1,size-1);
        return RemainingPart;
    }
}
int main(){
    int arr[5]={2,4,10,10,10};
    bool ans=isSorted(arr,5);
    if(ans){
        cout<<"array is sorted";
    }
    else{
        cout<<"array is not sorted";
    }
    return 0;
}

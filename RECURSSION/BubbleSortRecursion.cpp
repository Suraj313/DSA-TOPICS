#include<iostream>
using namespace std;
void BubbleSort(int *arr,int n){
    // base case
    if(n==0 || n==1){
        return ;
    }

    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    // recursive call
    BubbleSort(arr,n-1);

}
int main(){
    int arr[5]={2,4,1,5,3};
    BubbleSort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// Output of this program --->1 2 3 4 5

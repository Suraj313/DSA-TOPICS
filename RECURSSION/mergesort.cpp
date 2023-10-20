#include<iostream>
#include<vector>
 using namespace std;
 void merge( vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left =low;
    int right =mid+1;
    while(left <=mid && right<=high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
         temp.push_back(arr[left]);
         left++;
    }
    while(right <=high){
         temp.push_back(arr[right]);
         right++;
    }
    for(int i=low;i<=high;i++){
        arr[i] = temp[i-low];
    }
 }
void ms( vector<int> &arr,int low,int high){
    if(low == high) return;
    int mid =(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}


 int main(){
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(2);
    arr.push_back(6);
    arr.push_back(4);
    int n=arr.size();
    for( auto it : arr)cout<<it<<" ";
    cout<<endl;
    ms(arr,0,n-1);
    for( auto it : arr)cout<<it<<" ";
    cout<<endl;
    return 0;
 }
 // Output --> 1 1 2 2 3 4 4 5 6 
#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;
void Subset(int index,vector<int> &v,int arr[],int n){
    if(index==n){
        for( auto it : v){
            cout<<it<<" ";
        }
    if(v.size()==0){
        cout<<"{}";
    }
    cout<<endl;
    return;
}
// pick or take condition
v.push_back(arr[index]);
Subset(index+1,v,arr,n);
v.pop_back();

// not pick or not take condition
Subset(index+1,v,arr,n);
}


int main(){
int arr[]={3,1,2};
int n=3;
vector<int>v;
Subset(0,v,arr,n);
    return 0;
}
/*
 Output of this Program is-
3 1 2 
3 1
3 2
3
1 2
1
2
{}
*/
   
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> moveZeroes(int n,vector<int> a){
  int j=-1;
  //place the pointer j
  for(int i=0;i<n;i++){
    if(a[i]==0){
        j=i;
        break;
    }
  }
  // no non-zeroes elements
  if(j==-1) return a;
  // move the pointer i and j and swap accordingly
  for(int i=j+1;i<n;i++){
    if(a[i]!=0){
        swap(a[i],a[j]);
        j++;
    }
  }
  return a;
}
int main(){
 vector<int> arr={1,0,2,3,2,0,0,4,5,1};
 int n=10;
 vector<int> ans=moveZeroes(n,arr);
 for(auto &it : ans){
    cout<< it<<" ";
 }
 cout<<'\n';
 return 0;
}
// Output- 1 2 3 2 4 5 1 0 0 0 
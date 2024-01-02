#include<bits/stdc++.h>
using namespace std;
vector<int> FindArrayIntersection(vector<int> &A,vector<int> &B){
  int i=0;
  int j=0;
  int n=A.size();
  int m=B.size();
  vector<int>ans;
  while(i<n && j<m){
    if(A[i]<B[j]){
        i++;
    }
    else if(A[i]>B[j]){
        j++;
    }
    else {
        ans.push_back(A[i]);
        i++;
        j++;
    }
  }
  return ans;
}
int main(){
    vector<int>A{1,2,3,4,5};
    vector<int>B{2,3,5,6,7};
    int n=5;
    int m=5;
    vector <int> Union = FindArrayIntersection(A,B);
  for(auto & val: Union){
    cout<< val <<" ";
 }   
    return 0;
}
//Output-2 3 5 
#include<bits/stdc++.h>
using namespace std;
vector <int> FindUnion(int arr1[],int arr2[],int n,int m){
    int i=0,j=0; //pointers
    vector <int> Union; //Union Vector
    while(i<n && j<m){
        if(arr1[i]<=arr2[j]) // case 1 and 2
        {
            if(Union.size()==0||Union.back()!=arr1[i])
                Union.push_back(arr1[i]);
                i++;
            
        }
        else // case 3
        {
             if(Union.size()==0||Union.back()!=arr2[j])
                Union.push_back(arr2[j]);
                j++;
            
        }
    }
    while(i < n)  // if any elements left in arr1
    {
        if(Union.back()!=arr1[i])
            Union.push_back(arr1[i]);
            i++;
        
    }
     while(j < m) // if any elements left in arr2
    {
        if(Union.back()!=arr2[j])
            Union.push_back(arr2[j]);
            j++;
        
    }
    return Union;
}
int main(){
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,5,6,7};
    int n=5;
    int m=5;
    vector <int> Union = FindUnion(arr1, arr2 ,n,m);
  for(auto & val: Union){
    cout<< val <<" ";
 }   
    return 0;
}
//Output - 1 2 3 4 5 6 7 
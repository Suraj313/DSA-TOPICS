#include<bits/stdc++.h>
using namespace std;
int MissingNumber(vector<int> &A,int N){
    int xor1=0;
    int xor2=0;
    for(int i=0;i<N-1;i++){
        xor2=xor2^A[i];
        xor1=xor1^(i+1);
    }
    xor1=xor1^N;
    return (xor1^xor2);
} 
int main(){
    int N=5;
    vector<int> a={1,2,4,5};
    int ans =MissingNumber(a,N);
    cout<<ans<<endl;
    return 0;
}
//Output - 3
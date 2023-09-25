#include<iostream>
#include<string>
using namespace std;
bool Palindrome(string str,int i,int j){
    // base case
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        // Recursive call
        return Palindrome(str,i+1,j-1);
    }
}
int main(){
    string str="noon";
    bool ans =Palindrome(str,0,3);
    if(ans){
        cout<<"String is Palindrome";
    }
    else{
        cout<<"String is not Palindrome";
    }
    return 0;
}
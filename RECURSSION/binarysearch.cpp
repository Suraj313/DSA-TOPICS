// BINARY SEARCH
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
/*int binarysearch(int arr[],int size,int key){
    int s=0;
    int e = size-1;
    int mid = s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int a[5]={1,2,3,4,5};
    int b[6]={6,7,8,9,10,11};
    int oddindex=binarysearch(a,5,5);
    int evenindex=binarysearch(b,6,11);
    cout<<"index of 11 is "<<evenindex<<endl;

// Find Pivot Element index in rotated sortet array
  int Pivot(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
  }    

   int main(){
   int arr[7]={9,11,13,1,3,5,7};
   cout<<" Pivot Element Index - "<<Pivot(arr,5);
   
//QS --> SEARCH IN A ROTATED SORTED ARRAY
    int getPivot( int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
  }
  int binarysearch( int arr[],int s,int e,int k){
    int start=s;
    int end = e;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==k){
            return mid;
        }
        if(k<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
  int findposition( int arr[],int n,int k){
    int pivot =getPivot(arr,n);
    if(k >=arr[pivot] && k <=arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k);  
    }
  }

    int main(){
    int arr[5]={7,9,1,2,3};
    cout<<findposition(arr,5,9);
// SQUARE ROOT USING BINARY SEARCH
 long long  int SquareRoot(int n){
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
  long long int ans = -1;
    while(s<=e){
   long long  int square = mid*mid;
     if(square==n){
      return mid;
     }
     else if( square<n) {
      ans=mid;
      s = mid + 1;
     }
     else{
      e = mid -1;
     }
     mid = s + (e-s)/2;
    }
   return ans;
   }
   double moreprecision(int n, int precision,int temp_soln){
   double factor = 1; 
   double ans=temp_soln;
   for(int i=0;i<=precision;i++){
      factor=factor/10;
      for(double j=ans; j*j<n; j=j+factor){
         ans=j;
      }
   }
      return ans;
   }     
   int main() {
      int n;
      cin>>n;
      int temp_soln = SquareRoot(n);
      cout<<moreprecision(n,7,temp_soln);
      return 0;
   }

// QS - Book Allocation Problem
  bool isPossible(int arr[],int n,int m,int mid){
    int studentCount =1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum +=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum =arr[i];
        }

     }
     return true;
    }
  

  int allocateBooks(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
  }
  int main(){
    int books[5]={2,8,8,4,5};
    int  m=6; // no. of students
    int n=5;  // number of books
    cout<<allocateBooks(books,n,m);
  }  */

// qs -
   bool ispossible(int time[],int n,int m,int mid){
       int days_count =1;
       int time_sec =0;
   
    for(int i=0;i<m;i++){
        if(time_sec+ time[i]<=mid){
            time_sec +=time[i];
        }
    else{
        days_count++;
         if(days_count>n || time[i]>mid){
                return false;
            }
            time_sec=time[i];
        }

     }
     return true;
    }
    


   int ayushGivesNinjatest(int n,int m ,int time[]){
   int s=0;
   int sum=0;
   for(int i=0;i<m;i++){
    sum += time[i];
   }
   int e=sum;
   int ans=-1;
   int mid=s+(e-s)/2;
   while(s<=e){
        if(ispossible(time,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
  }
  
  int main(){
    int ch[5]={1,2,3,3,1};
    int m = 5;
    int n = 3;
    cout<<ayushGivesNinjatest(n,m,ch);


    return 0;
  }

   



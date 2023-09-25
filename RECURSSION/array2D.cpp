// ARRAY 2D

#include<iostream>
using namespace std;
/*bool ispresent(int arr[][4],int target,int rows,int column){
    for(int rows=0;rows<3;rows++){
    for(int column =0;column<4;column++){
        if(arr[rows][column]==target){
            return 1;
        }
        
    }
}
return 0;
}
// waveprint question
void waveprint(int arr[][2],int nRows,int mCols){
    for(int col =0;col<mCols;col++){
        if(col&1){
            for(int row=nRows-1;row>=0;row--){
                cout<<arr[row][col]<<endl;
            }
        }
        else{
            for(int row =0;row<nRows;row++){
                cout<<arr[row][col]<<endl;
            }
        }
    }
}*/
/*void PrintArray(int arr[][2],int nRows,int mCols ){
    for(int col =0;col<mCols;col++){
     for(int row=nRows-1;row>=0;row--){  
        cout<< arr[row][col]<<endl; 
}
    }
}*/
int main(){
//int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12}; Initializing Array
// arr[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
/*int arr[3][4];
// Taking Input
// row major method
for(int rows=0;rows<3;rows++){
    for(int column =0;column<4;column++){
        cin>>arr[rows][column];
    }
}
// printing array
for(int rows=0;rows<3;rows++){
    for(int column =0;column<4;column++){
        cout<<arr[rows][column]<<endl;
    }
}*/
// row-wise sum
/*for(int rows=0;rows<3;rows++){
    int sum=0;
  for(int column =0;column<4;column++){
      sum+=arr[rows][column];
    }
    cout<<sum<<endl;
}
// column major method
for(int column=0;column<4;column++){
    for(int rows =0;rows<3;rows++){
        cin>>arr[rows][column];
    }
}*/
// printing array
/*for(int column=0;column<4;column++){
    for(int rows =0;rows<3;rows++){
        cout<<arr[rows][column]<<endl;
    }
}*/
// column-wise sum
/*
for(int column=0;column<4;column++){
    int sum=0;
  for(int rows =0;rows<3;rows++){
      sum+=arr[rows][column];
    }
    cout<<sum<<endl;
}
int temp =0;
int row =-1;
for(int rows=0;rows<3;rows++){
    int sum=0;
  for(int column =0;column<4;column++){
      sum+=arr[rows][column];
    }
    if(sum>temp){
        temp = sum;
    }
}*/
//cout<<"larget row sum is"<<temp<<"\nlarget row sum row no. is"<<row;
// Printing largest row sum and row no.
/*int target;
cout<<" enter a target element ";
cin>>target;
if(ispresent( arr,target,3,4)){
    cout<< " element is present ";
}
else{
    cout<<" element is absent ";
}*/

// Wave Print question
//int arr[2][2]={1,2,3,4};
//waveprint(arr,2,2);
//PrintArray(arr,2,2);
int M1[10][10],M2[10][10],Res[10][10];
int r,c;
cout<<" enter no. of rows-"<<endl;
cin>>r;
cout<<" enter no. of column-"<<endl;
cin>>c;
// Taking Input of Element in matrices 1-
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>M1[i][j];
    }
}
return 0;
}
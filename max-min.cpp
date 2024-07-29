#include<iostream>
#include<limits.h>
using namespace std;
int main()
{

    // Method 1 - using INT_MIN and INT_MAX utility that is provided by <limits.h>
// int n;
// cout<<"enter the size of array";
// cin>>n;
// int arr[n] = {1,2,3,5,4,93,99,2,20,0,-21,55555};


// int minNo = INT_MAX;
// int maxNo = INT_MIN;

// for(int i=0; i<n;  i++){
//     if(arr[i]<minNo){
//         minNo = arr[i];
//     }
//     if(arr[i]>maxNo){
//         maxNo =arr[i];
//     }
// }



// cout<<"Min no : "<<minNo<<endl;
// cout<<"Max no : "<<maxNo;

// Method 2- Using inbuilt function min(a,b) and max(a,b)- 


int arr[] = {1,2,82,68,2,20,56,00,0,-55,-20,8888};
int n = 12;

int minNo = INT_MAX;
int maxNo = INT_MIN;

for(int i= 0; i<n ; i++){
    minNo = min(arr[i],minNo);
    maxNo = max(arr[i],maxNo);
}

cout<<"Min no : "<<minNo<<endl;
cout<<"Max no : "<<maxNo;

 return 0;
}
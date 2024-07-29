#include<iostream>
using namespace std;

void swap (int arr[] , int size){
    int left = 0;
    int right = size - 1;

//  Using for loop - 

// for (int left = 0 , right =size-1 ; left<=right; left++,right--){
//     swap(arr[left], arr[right]);
// }


    while(left<=right){
        swap(arr[left] , arr[right]);

        left ++;
        right -- ;
    }

    for (int i = 0; i<size ; i++){
        cout<<arr[i]<<" ";
    }
}



int main()
{

//  How to reverse an array - use sawp(a,b) builtIn function 

int arr[] = {1,2,3,4,5,6,7};

int size =7;

swap(arr,size);
















 return 0;
}
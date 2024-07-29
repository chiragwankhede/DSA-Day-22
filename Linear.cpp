#include<iostream>
using namespace std;

// USing function and array - 

// 1- function to print the elements of array-

void printNumber (int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<< arr[i] <<" ";
    }
}

// 1- function to find if given number is present in array (Linear search) - 

int linearSearch (int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i] == target){
            return true;
        }
       
}
 return false;
}



int main(){
int size=5;
int arr[5]={1,2,3,4,5};
int target= 5;

// function call with an array

printNumber(arr,size);   

bool ans = linearSearch(arr,size,target);

if(ans == true){
    cout<<"Element is present in array"<<endl;
}
else{
    cout<<"Element is not present in array"<<endl;
}








    return 0;
}

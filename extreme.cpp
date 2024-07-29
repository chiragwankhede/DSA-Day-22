#include<iostream>
using namespace std;

//  to print extreme in an array-

//  But if we use the condition for odd element in array, it will print the middle number twice, so use if condtion

void extreme (int arr[] , int size){
    int left = 0 ;
    int right = size -1 ;
while(left<=right){
    if(left == right){
        cout<<arr[left];
    }
    else{
    cout<<arr[left]<<endl;
    cout<<arr[right]<<endl;
    }
    
    left++;
    right--;

}

}

int main()
{

int arr [] = {10,20,30,40,50,60,70};
int size = 7;

extreme (arr,size);




 return 0;
}
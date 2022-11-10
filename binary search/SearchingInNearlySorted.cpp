#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[],int start,int end,int x){


while(start<=end){

int mid =start+(end-start)/2;

if(arr[mid]==x){
    return mid;
}

if(mid-1>start && arr[mid-1]==x){
    return mid-1;
}

if(mid+1<end && arr[mid+1]==x){
    return mid+1;
}
else if(x<arr[mid]){
    end=mid-2;
}
else if(x>arr[mid]){
    start=mid+2;
}

}

return -1;

}



int main(){

int arr[] = { 3, 2, 10, 4, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 99;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? printf("Element is not present in array")
        : printf("Element is present at index %d", result);


return 0;
}
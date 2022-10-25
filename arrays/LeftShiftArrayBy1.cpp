#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[],int n){
    
    for(int i=0;i<n;i++){
        
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}


//-----------------------------------------------------------------
//overriding elements by making an extra namespace


void rotateLeft1(int arr[],int n){
    
    int arr2[n];
    
    int temp=arr[0];
    
    for(int i=1;i<n;i++){
        arr2[i-1]=arr[i];
    }
    
    arr2[n-1]=temp;
    
    for(int i=0;i<n;i++){
        
        arr[i]=arr2[i];
    }
    
    
}

//tc: O(n) two seperate traversals
//SC: O(n) an sxtra array of n elements



//------------------------------------------------------------
//by overriding elements

void rotateLeft2(int arr[],int n){
    
    int temp=arr[0];
    
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    
    arr[n-1]=temp;
    
    
}

// TC: O(n) single traversal
// SC: O(1)




int main()
{
    int n=5;
    
    int arr[]={1,2,3,4,5};
    
    printArray(arr,n);
    
    rotateLeft1(arr,n);
    
    printArray(arr,n);
    
    return 0;
}

	
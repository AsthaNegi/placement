#include<bits/stdc++.h>
using namespace std;

void printArray(int  A[],int n)
{
    for (int i = 0; i < n; i++)
    {
         cout<<A[i]<<" ";
    }
    cout<<endl;
} 

void merge(int v[],int mid,int low,int high){

    int i=low; 
    int j=mid+1;
    int k=low;
    int temp[high+1];

    

    while( i<=mid && j<=high){

        if(v[i]<v[j]){
            temp[k]=v[i];
            k++;
            i++;
        }
        else{
            temp[k]=v[j];
            k++;
            j++;
        }


    }

    while(i<=mid){
       
       temp[k]=v[i];
       i++;
       k++;

    }

    while(j<=high){
       
       temp[k]=v[j];
       j++;
       k++;

    }


    for(int i=low;i<=high;i++){

        v[i]=temp[i];
    }



}

void mergeSort(int v[],int low,int high){
   
   if(low<high){  //sorting will happen will there are atleast two elements
     
     int mid=(low+high)/2;
     mergeSort(v,low,mid);
     mergeSort(v,mid+1,high);
     merge(v,mid,low,high);

     
   }
  


}




int main(){

int v[] = {9, 4, 4, 8, 7, 5, 6};
    
    int n = 7;
    
    printArray(v,n);
    mergeSort(v, 0, n - 1);
    printArray(v,n);



return 0;
}
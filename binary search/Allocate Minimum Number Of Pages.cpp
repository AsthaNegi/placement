#include<bits/stdc++.h>
using namespace std;



    bool isValid(int A[],int N,int M,long long maxNumOfPages){
        
        int student=1;
        long long sum=0;
        
        for(int i=0;i<N;i++){
            
            sum+=A[i];
            
            if(sum>maxNumOfPages){
                student++;
                sum=A[i];
            }
            
            if(student>M){
                return false;
            }
            
        }
        
        return true;
        
    }
    
    
    
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        if(M>N){
            return -1;  // when no. of students are more than no. of books given then we cannot 
            //allocate book to each student
        }
        
        int mx=INT_MIN;
        
        for(int i=0;i<N;i++){
            mx=max(mx,A[i]);  // pages of book with max pages in whole array
        }
        
        long long sum=0;
        
        for(int i=0;i<N;i++){
            sum+=A[i];    // sum of all the pages in all the books
        }
        
        
        long long start =mx;  // pages of book with max pages in whole array
        long long end=sum;   // sum of all the pages in all the books
        
        int res=-1;
        
        while(start<=end){
            
            long long mid=start+(end-start)/2;
            
            if(isValid(A,N,M,mid)==true){
                res=mid;  // possible candidate of min of max no. of pages a student can read
                end=mid-1; // search continues to the left side for min value than this
            }
            else{  // if possible candidate is not found , that means the students 
            //required to allocate less than mid no. of pages to each student is more than
            //M students serach continues to the right side, that is we have to allocate
            //more pages to each student    
                start=mid+1;
            }
            
            
        }
        
        
        return res;
        
        
    }




int main(){


return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
       int i=0;  // first row
       int j=m-1;  // last column
       
       // we are starting with right most top most element 
       
       while(i>=0 && i<n && j>=0 && j<m){  // so that our search doesn't go out of bound
       
         if(matrix[i][j] == x){  // element is found
             
             return true;
             
         }
         else if( matrix[i][j]>x){  // if element is greater than x(key element) we will discard 
         //that entire column and move towards the left column in search of smaller elements
             j--;
         }
         
         else if( matrix[i][j] <x) {
        // if element is less than x then we will move down that 
         //column in search of bigger elmenets
           i++;
         }
         
         
        }// while loop ends
        
       return false;        
       
       
    } // function ends
    
    //TC: O(m+n)  // the worst case when element is present at first column last row
    // SC: O(1)



int main(){


return 0;
}
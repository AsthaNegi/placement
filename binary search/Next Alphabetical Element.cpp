#include<bits/stdc++.h>
using namespace std;


char nextGreatestLetter(vector<char>& letters, char target) {
          
//Ceil of x is defined as the smallest element K in arr[] such that K is larger than or equal to x.       
       int start=0;
       int end=letters.size()-1;
      
      char ans=letters[0];

       while(start<=end){
           
         int mid=start+(end-start)/2;
        
         if(letters[mid]==target){
             start=mid+1;
         }
         if(letters[mid]<target){  
         //search is continued for bigger elements
            start=mid+1;
         }
         else if(letters[mid]>target){  
         // we will search for lesser elements
            ans=letters[mid];
             end=mid-1;
         }
            
       }// while loop end

       return ans;
        
}


int main(){


return 0;
}
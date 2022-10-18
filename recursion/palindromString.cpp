#include<bits/stdc++.h>
using namespace std;



//without recursion

bool isPalindrome(string S)
{
	    // Your code goes here
	    
	    int left=0;
	    int right=S.size()-1;
	    
	    while(left<right){
	        
	        if(S[left]!=S[right]){
	            return false;
	        }
	        else{
	            
	            left++;
	            right--;
	            
	        }// inner if else
	        
	        
	    }//while ends
	    
	    return true;
	    
	    
}//function ends




int main(){


return 0;
}
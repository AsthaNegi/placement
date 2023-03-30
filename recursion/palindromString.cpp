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


bool isPalindrome2(int i,string &s){

if(i>=s.size()/2){
	return true;
}

if(s[i]!=s[s.size()-i-1]) return false;
	
return isPalindrome2(i+1,s);

}

int main(){


return 0;
}
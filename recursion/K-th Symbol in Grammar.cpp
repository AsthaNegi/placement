#include<bits/stdc++.h>


using namespace std;


int kthGrammar(int n, int k) {
           
      // base
        
      if(n==1 && k==1) return 0;
        
        
      //hypo and indunction
        
      int mid=pow(2,n-1)/2; // pow(2,n-1) is length of that row  
        
      if(k<=mid){ 
          
         return  kthGrammar(n-1,k); // k will be same for ssmaller input
      } 
      else{
          
          return !kthGrammar(n-1,k-mid);// k will be found as compliment of elememt at k-mid for smaller input
      }
        
       
        
    }


int main(){


    cout<<kthGrammar(4,6);


    return 0;
}


 
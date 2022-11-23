/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


void solve(int n,string op,int one,int zero){
  
  // base
  
  if(n==0){
      
      cout<<op<<",";
      return;
  }
  
  // option of adding one is always available 
  string op1=op;
  op1.push_back('1');
  
  //n=n-1  zero=zero  one=one+1  when one is added to op
  solve(n-1,op1,one+1,zero);
  
  if(one>zero){
      
      // option of adding zero to prefix is available when one>zero
      string op2=op;
      op2.push_back('0');
      
      
      //n=n-1  zero=zero+1  one=one  when zero is added to op
      
      solve(n-1,op2,one,zero+1);
      
      
      
  }
 
      
    
}



int main()
{
     
    int n;
    cin>>n;
    
    string op="";
    
    int one=0,zero=0;
    
    solve(n,op,one,zero);

    return 0;
}  

 
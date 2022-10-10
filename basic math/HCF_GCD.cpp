#include<bits/stdc++.h>
using namespace std;

// GCD (Greatest Common Divisor) or HCF (Highest Common Factor) of two numbers is the largest number that divides both of them. 


//simpler approach

int GCD(int a,int b){

  int GCD;

  int mini=min(a,b);

  for(int i=1;i<=mini;i++){
     
     if(a%i==0 && b%i==0){

        GCD=i;
     }

  }

  return GCD;


}


// more efficient approach

// The idea is, GCD of two numbers doesn’t change if smaller number is subtracted from a bigger number. 

int GCD2(int a, int b)
{
    // Everything divides 0
    // edge cases
    if (a == 0)  
       return b;
    if (b == 0)
       return a;
  
    // base condition
    if (a == b)
        return a;
    
    // hypothesis
    //substract the smaller from greater
    if (a > b)
        return GCD2(a-b, b);
    return GCD2(a, b-a);
}


int main(){


int a,b;
cin>>a>>b;

cout<<GCD2(a,b);

return 0;
}
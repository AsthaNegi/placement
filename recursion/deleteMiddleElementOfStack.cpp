/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;



void del(stack<int> &s,int k){
    
    //base
    
    if(k==1){
        
        s.pop();
        return;
    }
    
    
    
    //hypo
    int val=s.top();
    
    s.pop();
    
    del(s,k-1);
    
    
    //induction
    
    s.push(val);     
    
}


int main()
{
    stack<int>s;
    
    s.push(7);
    s.push(23);
    s.push(14);
    s.push(15);
    s.push(90);
    s.push(100);
    
    if(s.size()==0){
        
        //checking if stack is empty
    }
    
    
    // position of middle element is found out
    int k=(s.size()/2)+1;
    
    // middle element is at kth position
    
    
    del(s,k);// calling delete function
    
    
    //printing values
    
    while(!s.empty()){
        
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
    
}




/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


void insert(stack<int> &s,int val ){
    
    //base
    
    if(s.empty()){
        
        s.push(val);// push the value when stack is empty
        return;
        
    }
    
    //hypo
    int k=s.top();// keep removing top values till stack is empty
    s.pop();
    insert(s,val);
    
    //induction
    
    s.push(k);// pushing all the removed values back
    
    
    
}



void rev(stack<int> &s){
    
    //base
    
    if(s.size()==0){
        
       return; // when stack is empty , stop!!
    }
    
    //hypo
    
    int val=s.top();// storingf the top value
    s.pop();
    
    
    rev(s);// calling for smaller input
    
    
    
    //induction
    
    insert(s,val);// inserting the value at bottom
    
    
    
    
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
    
    
    rev(s);// calling the reverse function
    
    
    
    //printing values
    
    while(!s.empty()){
        
        cout<<s.top()<<" ";
        s.pop(); 
    }
    
    return 0;
    
}


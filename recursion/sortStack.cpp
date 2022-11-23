
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void insert(stack<int> &s,int val){
    
    //base
    if(s.empty()|| s.top()<=val){
        
        s.push(val);
        return;
    }
    
    //hypo
    int val2=s.top();
    s.pop();
    insert(s,val);
    
    
    //induction
    s.push(val2);
    
}

void sort1(stack<int> &s){
    
    //base
    if(s.size()==1){
        return;
    }
    
    //hypo
    int val=s.top();
    s.pop();
    sort1(s);// called for smaller input
    
    //induction
    insert(s,val);
}



int main()
{    
    stack<int>s;
    
    s.push(5);
    s.push(1);
    s.push(0);
    s.push(2);
    
    sort1(s);
    
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}



#include<bits/stdc++.h>
using namespace std;

 int minEle;
    stack<int> s;
    stack<int>ss;
    
    
       /*returns min element from stack*/
       int getMin(){
           
           if(ss.size()==0){
               return -1;
           }
           
           return ss.top();
           
           
       }
       
       /*returns poped element from stack*/
       int pop(){
           
          if(s.size()==0){
              return -1;
          }
          
          int temp=s.top();
          
          s.pop();
          
          if(ss.top()== temp){
              ss.pop();
          }
          
          return temp;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           s.push(x);
           
           if(ss.size()==0 || ss.top()>=x){
               
               ss.push(x);
           }
           
           
           
       }


int main(){


return 0;
}
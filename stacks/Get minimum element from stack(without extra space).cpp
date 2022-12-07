#include<bits/stdc++.h>
using namespace std;

int minEle;
    stack<int> s;
    
    
    
       /*returns min element from stack*/
       int getMin(){
           
           if(s.size()==0){
               return -1;
           }
           
           return minEle;
       }
       
       /*returns poped element from stack*/
       int pop(){
           
           int temp;
           
          if(s.size()==0){
              return -1;
          }
          else{
              
               if(s.top()>=minEle){
                   temp=s.top();
                  s.pop();
               }
               else if(s.top()<minEle){
              
              // this means a corruped value was inserted at the time of pushing
              // means we are popping minEle out of stack and we need to change minEle
              //value back to previous one
                  
                  int val=2*minEle-s.top();
                  s.pop();
                  temp=minEle;
              
                 minEle=val;
              
               }  // else if
        
          } // if else
          return temp;
       }  // pop
       
       /*push element x into the stack*/
       void push(int x){
           
           if(s.size()==0){
               
               s.push(x);
               minEle=x;
           }
           else {
               if( x>=minEle){
                    s.push(x); // we won't need to change minEle
               }
               else if(x <minEle){
               // we need to change min Ele
               // but we also need to store minEle before changing it to x in a way that
               //if x is popped out  previous min Ele can be retrieved
               
                  s.push(2*x-minEle);
               
                  minEle=x;
               } // else if
               
           }  // if else
               
              
         
       }// push


int main(){


return 0;
}
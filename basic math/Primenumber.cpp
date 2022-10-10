#include<bits/stdc++.h>
using namespace std;

bool Prime(int num){
   
   int flag=1;
   
   for(int i=2;i<num;i++){
       
       if(num%i==0){
           flag=0;
           break;
       }
   }
    
   return flag;    
    
}



int main(){
int num;
cin>>num;

cout<<Prime(num);

return 0;
}



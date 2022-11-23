/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void solve(char src,char dest,char help,int n,int &count){
    
    
    //base
    if(n==1){
        
         cout<<"moving disk "<<n<< " from "<<src<<" to "
         <<dest<<endl;
         count++;
       
        return;
    }
    
    
    //hypo
    solve(src,help,dest,n-1,count);
    
    cout<<"moving disk "<<n<< " from "<<src<<" to "
     <<dest<<endl;
     count++;
    
    //induction
    
    solve(help,dest,src,n-1,count);
    
    
}

int main()
{
    int n=3,count=0;  
    
    solve('a','c','b',n,count);
    
    cout<<"total:"<<count;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    
	    for(int i=0;i<mat.size();i++){
	        
	        for(int j=0;j<mat[0].size();j++){
	            
	          if(mat[i][j]==X){
	              return 1;
	          }  
	        }
	    }
	    
	    return 0;
	    
	    
	    
}

int main(){


return 0;
}
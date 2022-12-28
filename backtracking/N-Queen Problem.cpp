#include<bits/stdc++.h>
using namespace std;


void solve(int col, vector<vector<int>> &board,vector<vector<int>> &ans,vector<int> ds,int n,vector<int> &left,vector<int> &upper, vector<int> &lower){

        

        if(col==n){

            ans.push_back(ds);

            return;

        }

        

        for(int row=0;row<n;row++){

            if(left[row]==0 && lower[row+col]==0 && upper[n-1 + col-row]==0){

                

                ds.push_back(row+1);

                board[row][col]=1;

                

                left[row]=1;

                lower[row+col]=1;

                upper[n-1+col-row]=1;

                

                solve(col+1,board,ans,ds,n,left,upper,lower);

                

                ds.pop_back();

                board[row][col]=0;

                

                left[row]=0;

                lower[row+col]=0;

                upper[n-1+col-row]=0;

            }

        }

    }


    vector<vector<int>> nQueen(int n) {
        
       
        
          vector<vector<int>> ans;

        vector<vector<int>> board(n,vector<int>(n,0));

        vector<int> ds;

        

        vector<int> left(n,0);

        vector<int> upper(2*n-1,0);

        vector<int> lower(2*n-1,0);

        

        solve(0,board,ans,ds,n,left,upper,lower);

        return ans;
    }



int main(){


return 0;
}
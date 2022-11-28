#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};


//Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        
        //base 
        
        if(node==NULL){
            return 0;
        }
        
        //hypothesis
        int h1=height(node->left);
        int h2=height(node->right);
        
        //induction
        
        return 1+max(h1,h2);
    }

int main(){


return 0;
}
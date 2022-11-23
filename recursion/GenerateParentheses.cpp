   
void solve(int open,int close, string op, vector<string> &v){
    
    // base
    
    if(open==0 && close==0){  // output is obtained when open and close brackets 0
        
        //cout<<op<<",";
        v.push_back(op);
        
        return;
        
    }
    
    
    if( open!=0){
        
        string op1=op;
        
        op1.push_back('('); // pushing opening bracket
        
         // reducing number of opening brackets  
        //  calling recursion for new output
        solve(open-1,close,op1,v);
        
    }
    
    
    if(close>open){
        
        // in this case two choices are there
        
        // opning bracket '(' case is handled by above if condition
        
        // closing bracket ')' case is handled by this :
        
        string op2=op;
        
        op2.push_back(')');  // closing bracket is pushed 
        
        
          // // reducing number of closing brackets
        //  calling recursion for new output
        solve(open,close-1,op2,v);
        
    }
    
    return;
}

    
    
    
    
    vector<string> generateParenthesis(int n) {
        
        int open=n;  // number of opening brackets
        int close=n;  // number of closing brackets


        string op="";  //initialise output as empty string

        vector<string>v;

        solve(open,close,op,v); 
        
        return v;
        
        
    }

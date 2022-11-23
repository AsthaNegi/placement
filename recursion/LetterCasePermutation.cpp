void solve(string op,string ip,vector<string> &v){
        
      
        
    //base
     if(ip.length()==0){
         
         v.push_back(op); // pushing possible outputs in vector
         
         return;
         
     } 
     
     
        
     if(isalpha(ip[0])){
         
             // if char is alphabet then two choices are there
             string op1=op;
            
             string op2=op;
         
          op1.push_back(tolower(ip[0]));   // conversion to  lowercase
          op2.push_back(toupper(ip[0])); // conversion to uppercase 
          
          
         ip.erase(ip.begin()+0);  // reducing the ip
         
         //recursion happening
         
         solve(op1,ip,v);
         
         solve(op2,ip,v);
         
    
     
     
         
     }
     else{
         
         
         
         // pushing numeric values without any change
         
         op.push_back(ip[0]);
         
         ip.erase(ip.begin()+0);  // reducing the ip
         
         solve(op,ip,v);
         
    
     }
     
     
        
    }
    
    
    vector<string> letterCasePermutation(string s) {
       
        string ip=s;
        string op="";
        
        vector<string>v;  
        
        solve(op,ip,v);  // calling our defined solve function
          
        return v;
      
    }

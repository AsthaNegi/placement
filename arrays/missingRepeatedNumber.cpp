#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){


    for(int i=0;i<n;i++){
     
     cout<<arr[i]<<" ";
    }
    cout<<endl;


}

void printVector(vector<int> &v){


    for(int i=0;i<v.size();i++){
     
     cout<<v[i]<<" ";
    }
    cout<<endl;


}

//---------------------------------------------------------------------------------------

//by double loop

int missingNumber1(int a[],int n){

    for(int i=1;i<=n;i++){  // for numbers 1 to n

        int flag=0;
    
        for(int j=0;j<n;j++){  // for checking each element in array
            
            if(a[j]==i){ // if number is found flag becomes 1
                flag=1;
                
            }  

        }

        if(flag==0){
                return i;// missing number
         }
    
    
    }

}
// TC: O(n^2)
// SC: O(1)

int repeatedNumber1(int a[],int n){

    for(int i=1;i<=n;i++){  // for numbers 1 to n

    int count=0;
   
     for(int j=0;j<n;j++){  // for checking each element in array
         
         if(a[j]==i){ // if number is found count is increased
            count++;   
         }
     }

     if(count==2){ // number appeared two times
        return i;// repeated number
     }

    }

}

// TC: O(n^2)
// SC: O(1)

//-----------------------------------------------------------------------------------------------------

//using map

int missingNumber2(int a[],int n){

  unordered_map<int,int>mp;

  for(int i=0;i<n;i++){  // n times
    
    mp[a[i]]++;// o(1)

  }

  for(int i=1;i<=n;i++){  // n times

    if(!mp.count(i)){    // if the number is not found
         return i;
    }

  }


}

// TC: O(n) two loops which run n times
// SC: O(n)  map of size n 



int repeatedNumber2(int a[],int n){

  unordered_map<int,int>mp;

  for(int i=0;i<n;i++){  // n times
    
    mp[a[i]]++;// o(1)

  }

  for(int i=1;i<=n;i++){  // n times

    if(mp[i]==2){  // if the frequency of that number is 2 

        return i;
    }

  }


}

// TC: O(n) two loops which run n times
// SC: O(n)  map of size n 



//--------------------------------------------------------------------------------------------------------------------------------------

// using count sort 

int missingNumber3(int a[],int n){
   
   vector<int>temp(n+1,0); //array upto index n all initialised with 0    // vector of size O(n+1)

   for(int i=0;i<n;i++){  // loop n times
     
     temp[a[i]]++; // element of array is found then that index is increemented in temp array

   }

   for(int i=1;i<=n;i++){ // loop n times
     
     if(temp[i]==0){ //if the temp at that index is 0 then that element is missing
       
       return i; 

     }

   }
   

}
// TC: O(n)  loop of size n 
// SC: O(n)  extra array of size n+1

int repeatedNumber3(int a[],int n){
   
   vector<int>temp(n+1,0); //array upto index n all initialised with 0    // vector of size O(n+1)

   for(int i=0;i<n;i++){  // loop n times
     
     temp[a[i]]++; // element of array is found then that index is increemented in temp array

   }

   for(int i=1;i<=n;i++){ // loop n times
     
     if(temp[i]==2){ //if the temp at that index is 2 then that element is repeated
       
       return i; 

     }

   }
   

}
// TC: O(n)  loop of size n 
// SC: O(n)  extra array of size n+1

//-------------------------------------------------------------------------------------------------------

//using math 


vector<int>missing_repeated_number(const vector<int> &A) {
    long long int len = A.size();

    long long int S = (len * (len+1) ) /2;
    long long int P = (len * (len +1) *(2*len +1) )/6;
    long long int missingNumber=0, repeating=0;
     
    for(int i=0;i<A.size(); i++){
       S -= (long long int)A[i];
       P -= (long long int)A[i]*(long long int)A[i];
    }
     
    missingNumber = (S + P/S)/2;

    repeating = missingNumber - S;

    vector <int> ans;

    
    ans.push_back(missingNumber);
    ans.push_back(repeating);

    return ans;
}

// Time Complexity: O(N) 

// Space Complexity: O(1) As we are NOT USING EXTRA SPACE


int main(){

 int a[]={4,1,2,5,3,5};

 int n=6;

 printArray(a,n);   

 int A=missingNumber3(a,n);

 int B=repeatedNumber3(a,n);

 int ans[]={A,B};

 vector<int>b={4,1,2,5,3,5};

 vector<int>v=missing_repeated_number(b);

 printVector(v);

return 0;


}
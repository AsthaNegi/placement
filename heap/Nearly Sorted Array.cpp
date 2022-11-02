#include <bits/stdc++.h>

using namespace std;



int main() {
	//code
	
	int t;
	cin>>t;
	
	while(t--){  //t test cases
	   
	   int n,k;
	   cin>>n>>k;
	   
	   int arr[n];
	   
	   for(int i=0;i<n;i++){  //filling array elements
	       cin>>arr[i];
	   }
	   
	priority_queue<int,vector<int>,greater<int>>minh; // min heap 

    int j=0;
    
    for(int i=0;i<n;i++){
        
        minh.push(arr[i]);
        
        if(minh.size()>k){  // min element is at top
            
            arr[j]=minh.top(); // store min elment in array
            j++;
            minh.pop();  // pop  the element after storing
        }
        
    }
    
    while(minh.size()>0){
        arr[j]=minh.top(); // storing remaining elements
        j++;
        minh.pop();
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
	   
	  
	   
	   
	    
	}
	
	
	return 0;
}
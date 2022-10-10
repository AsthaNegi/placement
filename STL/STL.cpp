#include<bits/stdc++.h>

using namespace std;

//----------------------- PAIR --------------------//


  // it is a class
  // lies in utility library


void ExplainPair(){
    
    pair<int,int>p={4,5};

    // or 
    //p=make_pair(4,5);

    // printing

    cout<<p.first<<p.second;

    //nested pair

    pair<int,pair<int,int>>p1={1,{3,4}};

    cout<<p1.first<<p1.second.first<<p1.second.second;

    // arrays of pair

    pair<int,int> arr[]={{1,4},{8,5},{90,55}};

    cout<<arr[1].second; // 5


    // copying pair 
    pair<int,string>p2={5,"astha"};
    pair<int,string> p3=p2; // p2 willl be copied to p2

    // passing by reference

    pair<int,int> &p4=p; // p will be passed as reference to p4

    // taking values

    cin>>p4.first;




}





// VECTOR
void ExplainVector(){

    vector<int>v; // creates empty container

    v.push_back(1); // pushes 1 in the end of vector
    v.emplace_back(2); // faster than 

    vector<pair<int,int>>v1;
    
    v1.push_back({1,3});// pushing a pair in vector
    v1.emplace_back(1,3); // pushing a pair

    vector<int> v2(3,10); //[10,10,10]

    vector<int> v3(5);  // [0,0,0,0,0] or garbage value
    

    //----- copying vector
    vector<int> v4={9,6};
    vector<int> v5(v4);// v1 will be copied

    // --------iteration
    vector<int>v6={6,78,3,2,1};

    vector<int>::iterator it =v6.begin(); //will point to memory address of 6 
     

    cout<<*(it); // 6
    
    it++;
    cout<<*(it); // 78
    
    it=it+2;
    cout<<*(it);//2 
    
    vector<int> :: iterator it1=v6.end();// will point to the address next to 1
    
    cout<<endl<<v6.at(0);//6 
    
    cout<<v6.back()<<" "; //1 
    
    // vector<int>v6={6,78,3,2,1};
    
    //-------printing a vector
    
    for(vector<int>:: iterator it2=v6.begin();it2!=v6.end();it2++){
       
       cout<<*(it2)<<" "; 
        
    }
    
    for(auto it2=v6.begin();it2!=v6.end();it2++){
       
       cout<<*(it2)<<" "; 
        
    }
    
    //range based loops
    for(auto val:v6){
        
        cout<<val<<" ";
    }
    
    cout<<endl;
    // deletion in vector
    
    vector<int>v7={90,2,5,1,7};
    
    v7.erase(v7.begin()+1); //[90,5,1,7]
    
    for(auto val:v7){
        
        cout<<val<<" ";
    }
    
            //included    // not included
    v7.erase(v7.begin()+1,v7.begin()+3); //[90,7] 
    
    for(auto val:v7){
        
        cout<<val<<" ";
    }
    
   //-----insert function

   vector<int>v8(2,100); //[10,10]

   v8.insert(v8.begin(),300); //[300,10,10]

   v8.insert(v8.begin()+1,3,11); //[300,11,11,11,10,10]


   vector<int>copy(2,50); //[50,50]
   v8.insert(v8.begin(),copy.begin(),copy.end());
   //[50,50,300,11,11,11,10,10]



  //------OTHER THINGS

  cout<<v8.size(); //8

  vector<int> vec={10,11};
  vec.pop_back(); //[10]

  vector<int> vec1={7,8};
  vector<int>vec2={9,10};

  vec1.swap(vec2);
  //vec1->[9,10]
  //vec2->[7,8]

  vec.clear(); // erases all elements , generates an empty vector

  if(vec.empty()){
    //checks vector is empty or not true or false
  }    
    

}

// ----------LIST---------

  //**implemented as doubly linked list
  //front operations are possible

void explainList(){
  

  list<int> ls;

  ls.push_back(2);//[2]
  ls.emplace_back(4);//[2,4]
  
  ls.push_front(5); //[5,2,4]

  ls.emplace_front(10); //[10,5,2,4]

  // rest functions are same as vectors
  //begin,end,rbegin,rend,clear,insert,size,swap



}


//---------DEQUE------------

//doubly ended queue

void explainDeque(){
 
 deque<int>dq;

 dq.push_back(6); //[6]
 dq.emplace_back(11);//[6,11]

 dq.push_front(2);//[2,6,11]
 dq.emplace_front(3); //[3,2,6,11]

 dq.pop_back(); //[3,2,6]
 dq.pop_front(); //[2,6]

 dq.back(); //prints 6

 dq.front(); //prints 2

 // rest same as vector
 //begin,end,rbegin,rend,clear,insert,size,swap


}

//--------------STACK-----------

//first in last out

// last in first out

//TC: all operations, O(1)

void explainStack(){

stack<int>st;

st.push(2); //[2]
st.push(11);//[11,2]
st.push(20);//[20,11,2]
st.emplace(60);//[60,20,11,2]

cout<<st.top(); // prints 60

st.pop(); // [20,11,2]

st.top(); // prints 20

st.size(); // 3

cout<<st.empty(); // false

stack<int>st1,st2;

st1.swap(st2);


}

//-----------QUEUE------------------

//First in first out

//TC: all operations O(1)

void explainQueue(){

  queue<int>q;
  
  q.push(1); //[1]
  q.push(4); //[1,4]
  q.push(11);//[1,4,11]

  q.back()+=2; //[1,4,13]

  cout<<q.back(); //prints 13

  cout<<q.front(); // print 1

  q.pop(); //[4,13]

  // size, swap,empty same as stack


}

//------------PRIORITY QUEUE----------

//tree based data structure

void explainPQ(){



//MAX HEAP
// MAXIMUM ELEMENT AT TOP

priority_queue<int>pq;


pq.push(5); // [5]   // logn
pq.push(20); // [20,5]
pq.push(2); // [20,5,2]
pq.emplace(8); // [20,8,5,2]

cout<<pq.top();  // prints 20  //O(1)

pq.pop();  // [8,5,2]  //logn

//size swap empty function same as queue

//MIN HEAP
//minimum element at top

priority_queue<int,vector<int>,greater<int>>pq1;

pq1.push(7); //[7]
pq1.push(2); //[2,7]
pq1.push(6); //[2,6,7]
pq1.push(15); //[2,6,7,15]


cout<<pq.top(); //prints 2




}


//------------------SET----------------

// all elements are unique
// all elements are stored in sorted manner

//tree based data structure

// TC: all operations in logn

void explainSet(){


set<int>st;

st.insert(8);//[8]
st.insert(3);//[3,8]
st.insert(55);//[3,8,55]
st.insert(55);//[3,8,55]  // doesn't repeat same element
st.emplace(18);//[3,8,18,55]
st.emplace(5);//[3,5,8,18,55]


// begin, end, rbegin,rend,size,empty,swap same as others

auto it=st.find(8); //returns an iterator pointing to 8

auto it1=st.find(100); // if 100 is not found will return st.end()

st.erase(18); //erases 18 [3,5,8,55]

auto it2=st.find(55);
st.erase(it2); //erases 55 [3,5,8]


int cn=st.count(11); // if 11 is present returns 1 , 
//if 11 is not present return 0

auto it3=st.find(3);
auto it4=st.find(8);
st.erase(it3,it4); // 3 included 8 not included [8]


// upper_bound() lower_bound() works in same way as in vector

auto it=st.lower_bound(2);

auto it=st.upper_bound(3);




}


//---------------MULTISET----------

//sorted
// duplicates can exist

void explainMultiset(){


multiset<int>ms;

ms.insert(6); //[6]
ms.insert(3);//[3,6]
ms.insert(3); //[3,3,6]
ms.insert(3);  //[3,3,3,6]
ms.insert(1);  //[1,3,3,3,6]


int cn=ms.count(3);// counts number of 3s

ms.erase(ms.find(3));// deletes first 3 that occur

ms.erase(3); // erases all 3s

//ms.erase(ms.find(3),ms.find(3)+2); // erase from first occurence of 3 till 1 more position ahead

// rest all same as set


}

//------------UNORDERED SET--------------


void explainUSet(){

  
//stores unique elements
// stores elements in random manner
// TC:O(1) which is better than ordered set in most cases except some when collision happens the complexity becomes O(N)
  unordered_set<int>st;
  
  // upper bount lower bound doesn't work, all other functions are same

}


//-----------MAP---------------

void explainMap(){

//key pair value
// key can be any data type
//pair can be any data type

//keys are unique //keys are stored in sorted order

//TC: logn
map<int,int>mp;


//insertion in map
mp[1]=2; //[{1,2}] //mp[key]=value
mp.insert({3,1});//[{1,2},{3,1}]
mp.insert({2,4}); // [{1,2},{2,4},{3,1}]

//iteration in map

for(auto it:mp){

  cout<<it.first<<" "<<it.second<<endl;

}

//accessing with help of key

cout<<mp[1]; //prints 2
cout<<mp[5]; // since key 5 is not present in map, will print 0 or NULL

//accessing with help of iterator

auto it1=mp.find(3); // mp.find(key) , will point to key value pair where key is 3

//cout<<*(it1).second;

auto it2=mp.find(5);// will point to mp.end() since key 5 is not in map


// upper and lower bound

auto it=mp.lower_bound(2);

auto it=mp.upper_bound(3);

//erase , swap,size, empty, are same as others

// any data type can be key and value
map<int,pair<int,int>>mp1;
mp1[3]={2,3};
map<pair<int,int>,int>mp2;
mp2[{3,6}]=10;



}

//-----------MULTIMAP------------

void explainMultimap(){

//everything same as map only it can store duplicate keys 
//keys in sorted order

multimap<int,int>mp;

mp.insert({1,2});//[{1,2}]
mp.insert({1,3});//[{1,2},{1,3}]



}

//----------UNORDERED MAP---------

void explainUnorderedMap(){

// everything same as map , only keys are not in sorted manner
//keys are unique

//TC: O(1) for all cases which is better than logn of ordered map
// only in very rare cases TC becomes O(n)


}

//----------ALGORITHMS AND EXTRA-----------

//SELF COMPARATOR

// comparator is a boolean function

bool comp(pair<int,int> p1,pair<int,int> p2){

  //for second element increasing

   if(p1.second<p2.second) return true;
   if(p1.second>p2.second) return false;

   //for first element decreasing

   //p1.second and p2.second are same

   if(p1.first>p2.first) return true;
   return false;


}

void explainExtra(){

  //-----sort function

int a[]={12,4,3,5};

sort(a,a+4); //[3,4,5,12] ,[a,a+4)

sort(a+2,a+4);

//sorting in decreasing order

//sort(a,a+4, greater<int>); //greater<int> is a comparator


// if we want to sort in our own manner , we can define our own comparator
pair<int,int>arr[]={{1,2},{2,1},{4,1}};

//sort it second element increasing , if second element is same then sort according to first element decreasing

sort(arr,arr+3,comp);
//[{4,1},{2,1},{1,2}]






//------built in popcount


// __builtin_popcount(x): This function is used to count the number of one’s(set bits) in an integer. 
// Example: 
 
// if x = 4
// binary value of 4 is 100
// Output: No of ones is 1.

int num=7;
int cnt= __builtin_popcount(num); // output=3 since binary of 7 is 111 


long long num=56784839929;

int cnt= __builtin_popcountll(num);





//-----------next permutation

string s="231";
// we need to sort the string to get all permutations

sort(s.begin(),s.end()); //"123"

// printing all permutations now

do{

  cout<<s<<endl;

}while(next_permutation(s.begin(),s.end()));

// when it will reach end, it will return false
// "123","132","213","231","312","321"

//-----------------max element

int arr1[]={4,5,12,7,33};
int maxi= *max_element(arr1,arr1+5); // max_element will return address of max element

//-----------------min element

int arr2[]={4,5,12,7,33};
int mini= *min_element(arr2,arr2+5); // min_element will return address of min element

}


//--------binary search, lower and upper bound---------

void extra(){

  //----binary search

  int arr[]={1,3,5,6,2};

  bool res=binary_search(arr,arr+5,6); //true

  bool res=binary_search(arr,arr+5,11); //false


//-----------lower bound


//  the function returns an iterator pointing to the next smallest number just greater than or equal to that number. If there are multiple values that are equal to val, lower_bound() returns the iterator of the first such value.
// The elements in the range shall already be sorted or at least partitioned with respect to val. 

vector<int> a={1,4,5,6,9,9};//sorted

int ind=lower_bound(a.begin(),a.end(),4)-a.begin(); // we substract a.begin() to get the index out of iterator
// will point to 4 at index 1

int ind=lower_bound(a.begin(),a.end(),7)-a.begin(); // will point to 9 at index 4

int ind=lower_bound(a.begin(),a.end(),10)-a.begin(); // will point to index 6(out of reach) since 10 is not present


//------------upper bound

// upper_bound() is a standard library function in C++ defined in the header . It returns an iterator pointing to the first element in the range [first, last) that is just greater than value, or last if no such element is found. The elements in the range shall already be sorted or at least partitioned with respect to val.


vector<int> a={1,4,5,6,9,9};//sorted

int ind=upper_bound(a.begin(),a.end(),4)-a.begin(); // we substract a.begin() to get the index out of iterator
// will point to 5 at index 2

int ind=upper_bound(a.begin(),a.end(),7)-a.begin(); // will point to 9 at index 4

int ind=upper_bound(a.begin(),a.end(),10)-a.begin(); // will point to end at index 6(out of reach) since 10 is not present


}

// MAIN FUNCTION

int main(){
    

    
    ExplainVector();





    return 0;

   
}





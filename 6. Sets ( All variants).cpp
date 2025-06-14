#include<bits/stdc++.h>
using namespace std;
    
void printSet(set<string>& s){
    for(string value:s){
        cout<<value<<" ";
    }
    cout<<endl;
    //Or
   /* for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<" ";   
    }*/
}

void printSet(multiset<string>& s){
    for(string value:s){
        cout<<value<<" ";
    }
    cout<<endl;
    
}

int main(){
    // Collection of elements -sets ! 3 types sets,unordered sets,multisets
    //Multisets are used most frequently in competitive programming
    set<string> s;// set of strings
    set<set<string>> s2;//set of sets

    //Set sorted order e element store kore and Unique hobe
    s.insert("abc"); // O(log(n)) for each
    s.insert("bcd");
    s.insert("cde");

//SET FIND
    auto it= s.find("abc");// O(log(n))
    if(it!=s.end()){
        cout<<(*it)<<endl;
    }else
    cout<<"Value doesn't exist"<<endl;
    
//SET ERASE
    auto it2= s.erase("abc"); // here erase op can be done by iterator or the actual value
    //O(log(n))
    printSet(s);

//UNORDERED SETS -> as the name implies , elements are not sorted in sorted order
    unordered_set<string> sUo;
    sUo.insert("bcd"); // O(1)
    sUo.insert("abc"); // O(1)

    //uses hash tables in the internal implementation just like unordered maps
    //as hash tables dont support complex data types so
    // unordered_set<pair<int,int>> s -> these are not allowed
    //Hash function only supports simple data types int char string

/* MULTI SET 
Multiple same values are allowed in the set  -> O(log(n)) for insert find and erase
*/
    // So values are not unique
    multiset<string> s23;
    s23.insert("abc"); // O(log(n)) for each
    s23.insert("abc");
    s23.insert("cde");
    s23.insert("bcd");
    printSet(s23);
    
    //Remember if we used s23.find("abc") it will return the iterator at the first "abc" it finds 
    /* so if we s23.erase("abc") -> this will remove all "abc" but if an iterator is pointing to the first / particular "abc" then s23.erase(it) will only result in removing that*/

}
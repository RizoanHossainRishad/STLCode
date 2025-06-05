#include<bits/stdc++.h>
using namespace std;
    

    void printvec(vector<int> & v){ // as Copying is expensive we will pass reference
        for(int i=0;i<v.size();i++){
            //v.size()-> O(1) complexity in total
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    pair<int,string> testpair; 
    //How to add value?
    testpair=make_pair(2,"abc"); // or = make_pair{2,"abc"}; both are valid
    cout<<testpair.first<<" "<<testpair.second<<endl;

    //Copying a pair?
    pair<int,string> p2=testpair; // testpair is copied into p2 
    pair<int,string>& p3=testpair; // this is reference p3 and testpair are same changes in p3 will also be on testpair
    p3.first=3;
    cout<<testpair.first<<" "<<testpair.second<<endl;

    /*
    VECTORS -> sizes can be dynamically increased and decreased ( based on content stored)  Continuous memory allocation so there is a limitation of size declaration in competitive sites 
     */
    //Simple declaratin and input and output

    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x); //O(1) time complexity for every element
    }
    cout<<" ---------VECTOR---------"<<endl;
    printvec(v);

    //Vector can also be declared with a size but even then size can be decrease or increased 
    vector<int> v(5,10); // 5 size with 5 10s in the vector
    //No need to concern for size in vectors as it dynamically allocates

    //To remove a value 
    vec.pop_back(); // O(1) time complexity for each

    vector<int> v2=v ; // copying is expensive time complexity O(n)


}
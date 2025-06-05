#include<bits/stdc++.h>
using namespace std;
int main2();
// Maps is a data structures that stores key value pairs
int main(){
    // 3 types of maps MAP , Unordered map , Multimap
    // in ordinary maps keys are stored in sorted order
    //So every element is key , value pairs
    //Discontinuous memory allocation
    map<int,string> m;
    m[1]="abc"; // O(key.size()*log(n)) complexity but for our case O(log(n)) as key is only 1 digit
    m[5]="cdc";
    m[3]="acd";

    m.insert({4,"afg"});

   for(auto& it:m){ //O(nlog(n)) for the whole loop
    cout<<it.first<<" "<<it.second<<endl;
   }
    cout<<endl;

    // KEYS ARE UNIQUE IN MAPS
    //Find function
    auto it2= m.find(3); // O(log(n))
    if(it2==m.end()){
        cout<<"No value in that key bro !"<<endl;
    }else{
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
    }


    //Erase function
    //m.erase(/*key or iterator*/); // or m.erase(it2); so deleting can be done by a key or iterator



    //CLEAR function that works for every containers such as vector , map ,set etc

    m.clear(); // empties out the entire map
    main2();
    
}


/* Given N strings, print unique string in lexioraphical order with their frequency N<= 10tothepower 5
|S| <= 100 */

int main2(){
    map<string,int> mep;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        mep[s]++;
    }
    for(auto &pr:mep){
        cout<<pr.first<<" " <<pr.second<<endl;
    }
}
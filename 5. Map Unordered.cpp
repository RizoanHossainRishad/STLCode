#include<iostream>
#include<vector>
#include<unordered_map>
#include<bits/stdc++.h>

using namespace std;

int main(){
   //Basically Unordered Map is as same as ordered maps with negligeble difference
    //as the name suggests the the keys are not sorted as like we have seen in ordered maps

    //Implementation-> Uses hash tables 
    unordered_map<int,string> m;
    m[1]="abc"; // Time complexity O(1) for each ( average )
    m[3]="dbc";
    m[2]="sbc";
    m[4]="abc";

    auto it=m.find(4); // O(1) but it was logn in ordered maps
    if(it!=m.end()){
        m.erase(it); // O(1) but it was logn in ordered maps
    }

    //SO unordered maps have less time complexity than ordered maps
    // as every thing is using hash tables in unordered maps so certain limitations in defining key datatypes
    
    map<pair<int,int>,string> orderMap; //CORRECT As uses trees so comparison of tress are allowed thus this is allowed
     unordered_map<pair<int,int>,string> UnorderMap; // XX wrong u cant do that as pair dont have inbuilt hash function/value defined

     //MULTI MAPS

     //We can add duplicated in multi maps
}
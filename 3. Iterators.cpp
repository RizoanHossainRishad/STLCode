#include<bits/stdc++.h>
using namespace std;
//ITERATORS
int main(){
    cout<<"ITERATORS"<<endl;
//Iterators are just like pointers but used to point to container elements
    //Note : containers are maps , sets, vectors etc etc 

    vector<int> v={2,3,4,5};
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> :: iterator it=v.begin(); // declaring an ITERATOR of the container:vector -> more easily to be said "Vector er element point korar jonne pointer er type tovector e howa lagbe as seen in basic pointer declaration-Recall"
    for(it=v.begin();it!=v.end();it++){ // ++it and it+1 is different 
            cout<<(*it)<<endl;
    }

    //it+1 although will work in vector as it allocates memory in a continuous manner
    //but maps sets will not allocate memory continuously but discontinuously so it++ works - again recall pointers 
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it2;

    for(it2=v_p.begin();it2!=v_p.end();it2++){
        cout<<(*it2).first<<" "<<(*it2).second<<endl;
        //or can be written like this
        //cout<< it->first <<" "<<it->second<<endl; // this only works in pair?? test it out

    }

    // Iterator short declarations and looping is too long -> short implementation but same work?
        vector<int> testvector={1,2,3,4,5};

        for(int &value:testvector){ // now this value is actually copy of the elements in testvector so rather use referencing
            cout<<value<<" "; 
        }
        cout<<endl;

        //same goes for previously declared v_p
        cout<<"Vector V_p which was vector of pairs: "<<endl;
        for(pair<int,int> &value2:v_p){
            cout<<value2.first<<" "<<value2.second<<endl;
        }

    //Dynamic data type by using Auto keyword

        auto i=2.3; //automatically take i as double

        // so explicitly iterator er jonne datatype bar bar loop e or declaration e dewa lagbe na
        cout<<"Auto keyword use: "<<endl;
        for(auto & value2:v_p){
            cout<<value2.first<<" "<<value2.second<<endl;
        }

}
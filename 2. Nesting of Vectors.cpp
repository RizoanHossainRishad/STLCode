#include<bits/stdc++.h>
using namespace std;
    

void printvec(vector<pair<int,int>> & v){ // as Copying is expensive we will pass reference
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
        cout<<endl;
}

void printarrofvec(vector<int> &Arrofvec){
    cout<<"Size is: "<<Arrofvec.size()<<endl; // remember is only O(1)
    for(int i=0;i<Arrofvec.size();i++){
            cout<<Arrofvec[i]<<" ";
        }
        cout<<endl;
}
int main(){
   //Nesting Vectors
    vector<pair<int,int>> v; // this is a vector of pair

    //v={{1,2},{2,3}}; // Direct initialization

    //or user input
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    printvec(v);

    //ARRAY of VECTORS
    //fixed numbers of vectors in a vector just like an array 
    /* Every vectors in a array of vector has the power to contain 
    varying number of elements BUT BUT number of vectors in the actual array of vector is actually fixed :D
*/
    cout<<"ARRAY of VECTORS"<<endl;
    int N;
    cin>>N;
    vector<int> Arrofvec[N]; 
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            Arrofvec[i].push_back(x);
        }
    }
    for(int i=0;i<N;i++)
    printarrofvec(Arrofvec[i]);

    cout<<endl<<endl<<"Vector of Vectors"<<endl;
    // VECTOR of VECTORS
        int N2;
        cin>>N2;        
        vector<vector<int>> vofv;
        for(int i=0;i<N2;i++){
            int n;
            cin>>n;
            vector<int> temp;
            for(int j=0;j<n;j++){
                int x;
                cin>>x;
                temp.push_back(x);
            }
            vofv.push_back(temp);
        }

        for(int i=0;i<vofv.size();i++){
            printarrofvec(vofv[i]);
        }


/* Sample input
3
1 2
2 3
3 4
3
3
1 2 3
3
3 4 5
2
1 2
5
5
1 2 3 4 5
2
1 2
3
1 2 3
4
4 5 6 7
1
1
*/
        /* Sample output should be 


1 2
2 3
3 4

ARRAY of VECTORS
Size is: 3
1 2 3 
Size is: 3
3 4 5 
Size is: 2
1 2 


Vector of Vectors
Size is: 5
1 2 3 4 5 
Size is: 2
1 2 
Size is: 3
1 2 3 
Size is: 4
4 5 6 7 
Size is: 1
1 
*/
}
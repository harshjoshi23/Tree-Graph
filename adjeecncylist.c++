#include<bits/stdc++.h> 
using namespace std; 

const int N = 1e3+10; 

vector<int> grap2[N];
int main(){
    int n,m; 
    cout<< "Enter the value of n and m: s" << endl; 
    cin>> n >> m ; 
    for (int i=0; i<m; i++){
        int v1,v2;
        cout<< "Enter the value of v1 and v2: " << endl; 
        cin>>v1>>v2;
        graph2[v1].push_back(v2);
        graph2[v2].push_back(v1);
    }
}
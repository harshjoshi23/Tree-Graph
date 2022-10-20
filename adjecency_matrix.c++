#include<bits/stdc++.h>
using namespace std; 

const int N = 1e3 + 10; 
int graph1[N][N]; 

int main(){
    int n,m; 
    cout<< "Enter the value of n and m: " << endl; 
    cin>> n >> m ; 
    for (int i=0; i<m; i++){
        int v1,v2; 
        cout<< "Enter the value of v1 and v2: " << endl; 
        cin>>v1>>v2;
        graph1[v1][v2] = 1;
        graph1[v2][v1] = 1;
         
    }
}
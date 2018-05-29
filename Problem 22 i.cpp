#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int>v[100];
    int e,V,s,d;
    cout<<"enter number of edges and vertex:  ";
    cin>>e>>V;
    cout<<"Enter the source and distribution: "<<endl;

    for(int i=0; i<e; i++){
        cin>>s>>d;
        v[s].push_back(d);
        v[d].push_back(s);
    }

    cout<<"output: "<<endl;
    for(int i=0; i<V; i++){
        cout<<i<<"= ";
        for(int j=0; j<v[i].size(); j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}

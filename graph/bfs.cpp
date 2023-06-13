#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int ,set<int>>adj;
    void addedge(int u,int v,bool direction){
        adj[u].insert(v);
        if(direction==0){
           adj[v].insert(u);   
        }
    }

    void printadjlist(){
        for(auto i:adj){
            cout<<i.first<<"->";
            for(auto j:i.second){
cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};



int main(){
int m,n;
cin>>m>>n;
graph g;
for(int i=0;i<=n;i++){
    int u,v;
    cin>>u>>v;
    g.addedge(u,v,0);

}
g.printadjlist();
}
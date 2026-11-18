#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& graph,vector<int>& ans,int s,vector<bool>& v){
    v[s]=true;
    ans.push_back(s);
    for(int i:graph[s]){
        if(!v[i]) dfs(graph,ans,i,v);
    }
}
int main(){
    int n,e;
    cout<<"enter number of vertices and the edgeas:";
    cin>>n>>e;
    vector<vector<int>> graph(n);
    for(int i=0;i<n;i++){
        cout<<"edges with the "<<i<<"th:";
        int x;
        cin>>x;
        for(int j=0;j<x;j++){
            int z;
            cout<<"enter :";
            cin>>z;
            graph[i].push_back(z);
        }
    }
    vector<int> ans;
    vector<bool> v(n,false);
    int c=0;
    dfs(graph,ans,c,v);
    cout<<"dfs:";
    for(int i:ans) cout<<i<<" ";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void bfshelp(vector<vector<int>>& g,vector<int>& ans,queue<int>& qu,vector<bool>& v){
    if(qu.empty()) return;
    int a=qu.front();
    qu.pop();
    ans.push_back(a);
    for(int i:g[a]){
        if(!v[i]){
          v[i]=true;
          qu.push(i);
        }
    }
    bfshelp(g,ans,qu,v);
}
void bfs(vector<vector<int>>& graph,vector<int>& ans){
    queue<int> qu;
    int n=graph.size();
    vector<bool> v(n,false);
    qu.push(0);
    v[0]=true;
    bfshelp(graph,ans,qu,v);
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
    bfs(graph,ans);
    cout<<"bfs:";
    for(int i:ans) cout<<i<<" ";
    return 0;
}
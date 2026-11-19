#include<bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> graph,vector<int>& ans){
    queue<int> qu;
    int n=graph.size();
    vector<int> visited(n,0);
    qu.push(0);
    visited[0]=1;
    while(!qu.empty()){
        int a=qu.front();
        qu.pop();
        ans.push_back(a);
        visited[a]=1;
        for(int i:graph[a]){
            if(visited[i]!=1){
                qu.push(i);
                visited[i]=1;
            }
        }
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
    bfs(graph,ans);
    cout<<"bfs:";
    for(int i:ans) cout<<i<<" ";
    return 0;
}
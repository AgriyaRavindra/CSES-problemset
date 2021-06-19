#include <bits/stdc++.h>
using namespace std;
    
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;
    
void dfs(int src,bool *visited,vector<int> graph[]){
    visited[src] = true;
    cout<<src+1<<" ";

    for(auto child: graph[src]){
        if(!visited[child]){
            dfs(child,visited,graph);
        }
    }
}
    
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int v,e;
    cin>>v>>e;
    vector<int> graph[v];
    bool visited[v];
    memset(visited,false,sizeof(visited));
    for(int i=0;i<e;i++){
        ll a,b;
        cin>>a>>b;
        a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i=0; i<v; i++){
        if(!visited[i]){
            dfs(i,visited,graph);
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<bool>> &visited, vector<vector<char>> &v, int a, int b, int N, int M){
    if(a > N-1 || b > M-1 || a < 0 || b < 0 || visited[a][b] == 1 || v[a][b] == '#')
        return;
    visited[a][b] = 1;

    if(a+1 < N && visited[a+1][b] == 0 && v[a+1][b] == '.')
        dfs(visited, v, a+1, b, N, M);
    if(a-1 >= 0 && visited[a-1][b] == 0 && v[a-1][b] == '.')
        dfs(visited, v, a-1, b, N, M);
    if(b+1 < M && visited[a][b+1] == 0 && v[a][b+1] == '.')
        dfs(visited, v, a, b+1, N, M);
    if(b-1 >= 0 && visited[a][b-1] == 0 && v[a][b-1] == '.')
        dfs(visited, v, a, b-1, N, M);
    
    return;
}


int main() { 
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N, M;
    cin >> N >> M;

    vector<vector<char>> v(N, vector<char>(M));
    vector<vector<bool>> visited(N, vector<bool>(M, 0));
    for(int a = 0; a < N; ++a){
        for(int b = 0; b < M; ++b){
            cin >> v[a][b];
        }
    }

    int c = 0;
    for(int a = 0; a < N; ++a){
        for(int b = 0; b < M; ++b){
            if(!visited[a][b] && v[a][b] == '.'){
                c++;
                dfs(visited, v, a, b, N, M);
            }
        }
    }
    cout << c;
    return 0;
}
#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;
int visited[1001];
int df(vector<int> graph[], int v){
    if(visited[v]) return 0;
    else{
        visited[v] = 1;
        cout << v << " ";
        for(int i = 0 ; i < (int)graph[v].size(); i++){
            int next = graph[v][i];
            df(graph, next);
        }
    }
    return 0;
}

int bf(vector<int> graph[], int v){
    vector<int> queue;
    queue.push_back(v);
    visited[v] = 0;
    cout << v << " ";
    for(int i = 0 ; i < (int)queue.size(); i++){
        int node = queue[i];
        for(int j = 0 ; j < (int)graph[node].size(); j++){
            int next = graph[node][j];
            if(visited[next]){
                visited[next] = 0;
                cout << next << " ";
                queue.push_back(next);
            }
        }
    }
    return 0;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,E,V;
    cin >> N>>E>>V;
    vector<int> graph[N+1];
    for(int i = 0 ; i < E; i++){
        int a,b;
        cin >> a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
        sort(graph[a].begin(), graph[a].end());
        sort(graph[b].begin(), graph[b].end());
    }
    
    df(graph, V);
    cout << "\n";
    bf(graph, V);
    return 0;
}
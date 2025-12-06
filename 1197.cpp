#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    int A;
    int B;
};

int find(int a, vector<int> &parent){
    if(parent[a] == a) return a;
    return parent[a] = find(parent[a], parent);
}

int union_find(int a, int b, vector<int> &parent){
    a = find(a, parent);
    b = find(b, parent);
    if(a != b){
        parent[a] = b;
        return 1;
    }
    return 0;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int V,E;
    int sum=0;
    cin >> V >> E;
    vector<Node> graph;
    for(int i = 0 ; i < E; i++){
        int a,b,w;

        cin >> a >> b >> w;
        graph.push_back({w,a,b});
    }
    sort(graph.begin(), graph.end(), [](Node &a, Node &b){
        return a.data < b.data;
    });
    vector<int> parent(V+1);
    for(int i = 1 ; i <= V; i++) parent[i] = i;

    for(int i = 0; i < graph.size(); i++){
        if(union_find(graph[i].A, graph[i].B, parent)){
            sum += graph[i].data;
        }
    }
    cout << sum;


    return 0;
}
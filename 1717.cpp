#include <iostream>
#include <vector>

using namespace std;

vector<int> parent;

int find_set(int x) {
    if (parent[x] == x) {
        return x;
    }
    return parent[x] = find_set(parent[x]);
}

void merge(int a, int b) {
    int rootA = find_set(a);
    int rootB = find_set(b);
    if (rootA != rootB) {
        parent[rootB] = rootA;
    }
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    cin >> N >> M;

    parent.resize(N + 1);
    for(int i = 0 ; i <= N; i++){
        parent[i] = i;
    }

    for(int i = 0 ; i < M; i++){
        int cmd,a,b;
        cin >> cmd >> a >> b;
        if(cmd == 0){
            merge(a, b);
        }
        else if(cmd == 1){
            if(find_set(a) == find_set(b)){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}
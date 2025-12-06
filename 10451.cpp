#include <iostream>
using namespace std;

bool visited[1001];
int arr[1001];

void dfs(int start, int current, int& count) {
    if (visited[current]) {
        if (current == start) count++;
        return;
    }
    
    visited[current] = 1;
    dfs(start, arr[current], count);
}

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        fill(visited, visited + 1001, false);
        int count = 0;
        for (int i = 1; i <= N; i++) {
            cin >> arr[i];
        }
        for (int i = 1; i <= N; i++) {
            if (!visited[i]) {
                dfs(i, i, count);
            }
        }
        
        cout << count << '\n';
    }
    return 0;
}
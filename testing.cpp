#include <iostream>
#include <vector>
#include <algorithm>
#include <windows.h>
using namespace std;

const int INF = 1e9; // 무한대를 나타내는 값

void floydWarshall(vector<vector<int>>& dist, int n) {
    // Floyd-Warshall 알고리즘
    // k: 거쳐가는 노드
    for (int k = 0; k < n; k++) {
        // i: 출발 노드
        for (int i = 0; i < n; i++) {
            // j: 도착 노드
            for (int j = 0; j < n; j++) {
                // i에서 j로 가는 거리와 i에서 k를 거쳐 j로 가는 거리 비교
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main() {
    int n, m; // n: 노드의 개수, m: 간선의 개수
    cout << "노드의 개수와 간선의 개수를 입력하세요: ";
    cin >> n >> m;
    
    // 거리 행렬 초기화
    vector<vector<int>> dist(n, vector<int>(n, INF));
    
    // 자기 자신으로 가는 거리는 0
    for (int i = 0; i < n; i++) {
        dist[i][i] = 0;
    }
    
    // 간선 정보 입력
    cout << "간선 정보를 입력하세요 (출발 도착 비용):" << endl;
    for (int i = 0; i < m; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        dist[a][b] = c; // a에서 b로 가는 비용은 c
        // 양방향 그래프인 경우 아래 줄의 주석을 해제하세요
        // dist[b][a] = c;
    }
    
    // Floyd-Warshall 알고리즘 실행
    floydWarshall(dist, n);
    
    // 결과 출력
    cout << "\n모든 쌍의 최단 거리:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF) {
                cout << "INF ";
            } else {
                cout << dist[i][j] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}

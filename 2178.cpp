#include <iostream>
#include <vector>
#include <queue>                
using namespace std;


int visit[101][101];
int miro[101][101];
int N, M;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> N >> M;
    int cnt;
    int dx[4] = { 0,0,1,-1 };
    int dy[4] = { 1,-1,0,0 };

    queue<pair<int, int>> q;
    
    for(int i = 0 ; i < N; i++){
        string s;
        cin >> s;        
        for(int j = M-1; j >= 0; j--){
            miro[i][j] = s[j] - '0';
        }
    }
    q.push({0,0});
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (visit[nx][ny] != 0) continue;
			if (miro[nx][ny] == 0) continue;

            visit[nx][ny] = visit[cur.first][cur.second] + 1;
			q.push({ nx,ny });
		}
    }
    cout << visit[N-1][M-1]+1;
    return 0;
}
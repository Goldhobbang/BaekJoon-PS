#include <iostream>
#include <vector>
#include <queue>                
using namespace std;
int visit[1001][1001];
int miro[1001][1001];
int N, M;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> N >> M;
    int cnt;
    int dx[4] = { 0,0,1,-1 };
    int dy[4] = { 1,-1,0,0 };

    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            visit[i][j] = -1;
        }
    }
    queue<pair<int, int>> Queue;
    
    for(int i = 0 ; i < N; i++){       
        for(int j = 0; j<M; j++){
            cin >> miro[i][j];
            if(miro[i][j]==2){
                Queue.push({i,j});
                visit[i][j]=0;
            }
        }
    }

	while (!Queue.empty()) {
		auto cur = Queue.front();
		Queue.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (visit[nx][ny] != -1) continue;
			if (miro[nx][ny] == 0) continue;

            visit[nx][ny] = visit[cur.first][cur.second] + 1;
			Queue.push({nx,ny});
		}
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(miro[i][j]==0) cout << 0 << ' ';
            else cout << visit[i][j] << ' ';
        }
        cout<<'\n';
    }
    return 0;
}
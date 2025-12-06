#include <iostream>
#include <vector>
using namespace std;


int visit[101][101];
int miro[101][101];
int N, M;
int ans = 99999999;

void dp(int x, int y, int cnt){
    if(x == N-1 && y == M-1){
        ans = min(ans, cnt);
        return;
    }
    if(x >= N || y >= M || y < 0 || x < 0 || !miro[x][y] ||visit[x][y]){
        return;
    }
    else{
        visit[x][y] = 1;
        if(miro[x][y+1] == 1) dp(x, y+1,cnt+1);
        if(miro[x+1][y] == 1) dp(x+1, y,cnt+1);
        if(miro[x][y-1] == 1) dp(x, y-1,cnt+1);
        if(miro[x-1][y] == 1) dp(x-1, y,cnt+1);
        visit[x][y] = 0;
    }
    return;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    cin >> N >> M;
    for(int i = 0 ; i < N; i++){
        string s;
        cin >> s;

        for(int j = M-1; j >= 0; j--){
            miro[i][j] = s[j] - '0';
        }
    }
    dp(0,0,1);
    cout << ans;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M,K;
    int C[3][1001];
    int T[1001][1001];
    int ans[3][1001];
    vector<int> team(1001); 
    cin >> N >> M >> K;
    for(int i = 0 ; i < M ; i ++){
        int a;
        cin >> a;
        for(int j = 0; j < a; j++){
            int A;
            cin >> A;
            T[i][A];
        }
    }
    for(int i = 0 ; i < N ; i ++){
        int a,b,c;
        cin >> a >> b >> c;
        C[0][a] = b;
        C[1][a] = c;
    }
    // ans[0] => solve, ans[1] == penal;
    for(int i = 0 ; i < M ; i ++){
        for(int j = 0 ; j<N;j++){
            if(T[i][j]){
                ans[0][i] += C[0][j];
                ans[1][i] += C[1][j];
            }
        }
    }
    sort(ans,ans+N);
    for(int i = 0 ; i < M ; i ++){
        cout << ans[0][i] << ans[1][i];
    }
    return 0;
}
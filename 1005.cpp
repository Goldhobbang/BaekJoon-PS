#include <iostream>
#include <vector>
using namespace std;




int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int T;

    cin >> T;

    for(int i = 0 ; i < T; i++){
        int K, N, W;
        cin >> N >> K;
        vector<int> A[N+1];
        for(int j = 0; j < N; j++){
            int a;
            cin >> a;
            A[j].push_back(a);
        }
        for(int j = 0; j < K; j++){
            int a,b;
            cin >> a >> b;
            A[a-1].push_back(b);
        }
        cin >> W;
        int ans=0;
        for(int j = 0; j < W; j++){
            int max_val = -1;
            cout << "size" << A[j].size() << "\n";
            for(int k = 1; k < (int)A[j].size(); k++){
                max_val = max(A[A[j][k]][0], max_val);
                cout << "A" << max_val << "\n";
            }
            ans += max_val;
        }
        cout << ans << "\n";
    }
    return 0;
}
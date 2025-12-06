#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int V[500001];
    int Speed=0;
    long long ans = 0;
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> V[i];
    }
    for(int i = N - 1; i >= 0; i--){
        Speed = min(Speed + 1, V[i]);
        ans += Speed;
    }
    cout << ans << "\n";
    return 0;
}
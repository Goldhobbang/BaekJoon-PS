#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int N,M,a,b;
    int l;
    cin >> N >> M;
    long long int cnt=0;
    int player[200001] = {0};
    for(int i = 0 ; i < M; i++){
        cin >> a >> b;
        player[a-1]++;
    }
    sort(player,player+N);
    for(int i = 0 ; i < N-1; i++){
        while(player[i]>=player[i+1]){
        // for(int i = 0 ; i < N; i++) cout << player[i] << " " ;// ?
        // cout << endl;
        player[i+1]++;
        cnt++;
        }
    }
    cout << cnt;
    return 0;
}
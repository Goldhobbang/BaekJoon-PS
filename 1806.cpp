#include <iostream>
#include <vector>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    long long arr[110000];
    arr[0] = 0;
    for(int i = 1 ; i <= N ; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    if(arr[N] < M){
        cout << 0;
        return 0;
    }
    int min_dist=100005;
    int s=0,e=1;
    while(e<=N){
        if(arr[e]-arr[s] >= M){
            s++;
            min_dist=min(e-s+1,min_dist);
            // cout << "큰합: " << arr[e]-arr[s] << '\n';
        }
        else {
            // cout << "작은합: " << arr[e]-arr[s] << '\n';
            e++;
        }
    }
    cout << min_dist;
    return 0;
}
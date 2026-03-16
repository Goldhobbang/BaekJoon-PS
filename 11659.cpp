#include <iostream>
#include <vector>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N, M;
    cin >> N >> M;
    long long arr[100001];
    long long ans[100001];
    
    arr[0] = 0;
    for(int i = 1 ; i <= N ; i++){
        cin >> arr[i];
        arr[i] += arr[i-1];
    }
    for(int i = 0 ; i < M; i++){
        int a,b;
        cin >> a >> b;
        ans[i] = arr[b]-arr[a-1];
    }
    for(int i = 0 ; i < M; i++){
        cout << ans[i] << "\n";
    }
    return 0;
}
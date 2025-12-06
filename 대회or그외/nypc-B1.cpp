// #include <iostream>
// #include <algorithm>
// using namespace std;
// int arr[200001];
// int N,K;
// int visit[200001];

// int dp(int n,int l, int r){
//     int result = arr[N-1] - arr[0];
//     if(n==1) return arr[0];
//     else if(visit[n]!=-1) return visit[n];
//     else{
//         visit[n] = arr[r]-arr[l];
//         int b = dp(n-1,l+1,r);
//         int a = dp(n-1,l,r-1);
//         result = max(a,b);
//     }
//     return result;
// }


// int main(){
//     cin.tie(nullptr)->sync_with_stdio(false);
//     cin >> N >> K;
//     fill(visit,visit+200001,-1);
//     for(int i = 0 ; i < N; i++){
//         cin >> arr[i];
//     }
//     cout << dp(K,0,N-1);
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);

    int N, K;
    cin >> N >> K;
    int arr[200001];
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int ans = arr[N-1] - arr[0];
    if (K <= 1) {
        for (int i = 0; i < N - 1; i++) {
            swap(arr[i], arr[i+1]);

            ans =max(arr[N-1] - arr[0], ans);

            swap(arr[i], arr[i+1]);
        }
    }
    else{
        for(int i=0;i<=K;i++){
            ans = max(ans,arr[N-i-1]);
        }
        ans--;
    }

    cout << ans << "\n";
}
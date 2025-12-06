#include <iostream>
using namespace std;
unsigned long long dp[351][351];
int nck(unsigned long long n,unsigned long long r)
{
    if(dp[n][r] != 0)
        return dp[n][r];
    else if(n == r || r == 0){
        dp[n][r]=1;
        return 1; 
    }
    else 
        return dp[n][r] = nck(n - 1, r - 1) + nck(n - 1, r);
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int M,K;
    cin >> M;
    int arr[51];
    int sum=0;
    unsigned long long sum2 = 0;
    if(M==1){ // 예외
        int a;
        cin >> a;
        cout << "1.0";
        return 0;
    }

    for(int i = 0; i < M; i++){
        cin >> arr[i];
        sum+=arr[i];
    }   
    cin >> K;

    if(K==1){ // 예외
        cout << "1.0";
        return 0;
    }
    for(int i = 0; i < M; i++){
        sum2 += nck(arr[i],K);
    }
    unsigned long long all = nck(sum,K);
    long double ans = (long double)sum2/all;
    cout << ans;
    return 0;
}
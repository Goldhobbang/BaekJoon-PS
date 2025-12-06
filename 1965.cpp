#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int arr[1001];
    for(int i = 1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int dp[1001];
    for(int i = 1; i<=n;i++){
        dp[i]=1;
    }
    for(int i = 1;i<=n;i++){
        for(int j = 0;j<i;j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i],dp[j]+1);
            }
        }
    }
    sort(dp,dp+n+1);
    printf("%d",dp[n]);
return 0;
}
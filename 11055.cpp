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
        dp[i]=arr[i];
    }
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<i;j++){
            if(arr[i] > arr[j]){
                dp[i] = max(dp[i],dp[j]+arr[i]);
            }
        }
    }
    int ans = 0;
    for(int i = 1; i<=n; i++) ans = max(ans, dp[i]); // 변경: 정렬 대신 최댓값 직접 계산
    printf("%d",ans);
return 0;
}
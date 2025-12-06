#include<iostream>
using namespace std;
int dp[1000001];

int fibonacci(int n) {
    if(n==0) return 0;
    else if(dp[n]!=0) return dp[n];
    else return dp[n] = (fibonacci(n-1) + fibonacci(n-2))%1000000007;

}

int main() {
    int n;
    cin >> n;
    dp[1]=1;
    dp[2]=1;
        cout << fibonacci(n);
    return 0;
}
// 피보나치 함수
// https://wyatti.tistory.com/entry/C%EB%A1%9C-%ED%94%BC%EB%B3%B4%EB%82%98%EC%B9%98-%EC%88%98%EC%97%B4-%EC%9D%B4%ED%95%B4%ED%95%98%EA%B3%A0-%EA%B5%AC%ED%98%84%ED%95%98%EA%B8%B0-%EC%9E%85%EB%AC%B8%EC%9E%90%EB%A5%BC-%EC%9C%84%ED%95%9C-%EC%99%84%EB%B2%BD-%EA%B0%80%EC%9D%B4%EB%93%9C
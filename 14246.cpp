#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,k;
    int arr[100001];
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
    }
    cin >> k;
    long long cnt=0;
    for(int i = 0;i<N;i++){
        long long sum = 0;
        for(int j = i;j < N;j++){
            sum+=arr[j];
            if(sum > k){
                cnt += N-j;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
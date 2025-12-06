#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int N,M;
    int A[500001],B;
    cin >> N;
    int ans[500001] = {0};

    for(int i = 0 ; i < N; i++){
        cin >> A[i];
    }
    sort(A,A+N);
    cin >> M;

    for(int i = 0 ; i < M; i++){
        cin >> B;
        int low = 0, high = N - 1;
        while(low <= high){
            int mid = (low + high) / 2;
            if(B == A[mid]){
                ans[i] = 1;
                break;
            };
            if(B < A[mid]){
                high = mid - 1;
            }
            else if(B > A[mid]){
                low = mid + 1;
            }
        }
        }

    
    for(int i = 0; i < M;i++){
        cout << ans[i] << " ";
    }
    return 0;
}

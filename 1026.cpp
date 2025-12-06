#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int A[50],B[50];
    int cnt=0;
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> A[i];
    }
    for(int i = 0 ; i < N; i++){
        cin >> B[i];
    }
    sort(A,A+N);
    sort(B,B+N,greater<int>());
    for(int i = 0 ; i < N; i++){
        cnt+=A[i]*B[i];
    }
    cout << cnt;
    return 0;
}
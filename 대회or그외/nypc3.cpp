#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(2*N);
    for (int i = 0; i < 2*N; ++i) {
        cin >> A[i];
    }
    sort(A.begin(), A.end());
    long long S = 0;
    for (int i = 0; i < 2 * N; i += 2) {
        int t = min(A[i], A[i + 1]);
        int R = t / M;
        S += 2LL * t * R;
    }

    cout << S << endl;
    return 0;
}
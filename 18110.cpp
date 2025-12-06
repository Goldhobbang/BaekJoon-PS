#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int diff[300001];
    cin >> N;
    if(N==0) {
        cout << 0 << '\n';
        return 0;
    }
    for (int i = 0; i < N; i++) {
        cin >> diff[i];
    }

    sort(diff, diff + N);

    int trimmedmean = round(N * 0.15);
    int sum = 0;

    for (int i = trimmedmean; i < N - trimmedmean; i++) { 
        sum += diff[i];
    }

    double avg = (double)sum / (N - 2 * trimmedmean);

    cout << round(avg) << '\n';

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long total = 0;
    for (long long i = 1; i <= K; ++i) {
        total += 1 + i * (N - i);
    }

    cout << total << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    int chessy, chessx;
    cin >> chessy >> chessx;
    char in[51][51];
    for (int i = 0; i < chessy; i++) {
        cin >> in[i];
    }

    int min_cnt = 1e9;
    for (int sy = 0; sy <= chessy - 8; sy++) {
        for (int sx = 0; sx <= chessx - 8; sx++) {
            for (int first = 0; first < 2; first++) {
                int cnt = 0;
                for (int i = 0; i < 8; i++) {
                    for (int j = 0; j < 8; j++) {
                        char expected = ((i + j) % 2 == first) ? 'W' : 'B';
                        if (in[sy + i][sx + j] != expected) cnt++;
                    }
                }
                if (cnt < min_cnt) min_cnt = cnt;
            }
        }
    }
    cout << min_cnt;
    return 0;
}

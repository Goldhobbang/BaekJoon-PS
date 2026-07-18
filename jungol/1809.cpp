#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> heights(N);
    for (int i = 0; i < N; ++i)
        cin >> heights[i];

    stack<pair<int, int>> st;
    vector<int> result(N);

    for (int i = 0; i < N; ++i) {
        int h = heights[i];
        while (!st.empty() && st.top().first < h)
            st.pop();

        if (st.empty())
            result[i] = 0;
        else
            result[i] = st.top().second;

        st.push({h, i + 1});
    }

    for (int i = 0; i < N; ++i)
        cout << result[i] << ' ';
    cout << '\n';

    return 0;
}

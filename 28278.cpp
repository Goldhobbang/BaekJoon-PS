#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, cmd, X;
    cin >> N;
    stack<int> arr;

    while (N--) {
        cin >> cmd;

        if (cmd == 1) {
            cin >> X;
            arr.push(X);
        } else if (cmd == 2) {
            if (arr.empty()) cout << "-1\n";
            else {
                cout << arr.top() << "\n";
                arr.pop();
            }
        } else if (cmd == 3) {
            cout << arr.size() << "\n";
        } else if (cmd == 4) {
            cout << arr.empty() << "\n";
        } else if (cmd == 5) {
            if (arr.empty()) cout << "-1\n";
            else cout << arr.top() << "\n";
        }
    }
    return 0;
}
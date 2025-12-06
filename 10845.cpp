#include <iostream>
#include <queue>

using namespace std;

int main() {
    int i, n, x;
    string cmd;
    queue<int> q;
    
    cin >> n;
    
    for (i = 0; i < n; i++) {
        cin >> cmd;
        
        if (cmd == "push") {
            cin >> x;
            q.push(x);
        }
        else if (cmd == "pop") {
            if (!q.empty()) {
                cout << q.front() << endl;
                q.pop();
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if (cmd == "size") {
            cout << q.size() << endl;
        }
        else if (cmd == "empty") {
            cout << (q.empty() ? "1" : "0") << endl;
        }
        else if (cmd == "front") {
            if (!q.empty()) {
                cout << q.front() << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
        else if (cmd == "back") {
            if (!q.empty()) {
                cout << q.back() << endl;
            }
            else {
                cout << "-1" << endl;
            }
        }
    }
    
    return 0;
}
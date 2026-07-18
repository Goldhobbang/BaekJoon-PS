#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    stack<char> st;
    int pieces = 0;

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '(') {
            st.push('(');
        } else {
            st.pop();
            if (s[i - 1] == '(') {
                pieces += st.size();
            } else {
                pieces += 1;
            }
        }
    }

    cout << pieces << '\n';
    return 0;
}

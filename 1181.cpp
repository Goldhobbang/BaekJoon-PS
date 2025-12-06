#include <iostream>
#include <set>
#include <string>
using namespace std;

struct cmp {
    bool operator()(const string &a, const string &b) const {
        if (a.length() == b.length()) return a < b;
        return a.length() < b.length();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    set<string, cmp> s;

    for (int i = 0; i < N; i++) {
        string str;
        cin >> str;
        s.insert(str); // 자동 중복 제거 + 정렬
    }

    for (auto &x : s) {
        cout << x << "\n";
    }
}
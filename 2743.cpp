#include <iostream>

using namespace std;

int main() {
    string str1;
    int cnt = 0,i;

    cin >> str1;

    for (i = 0; i < str1.length(); i++) {
        cnt++;
    }

    cout << cnt;

    return 0;
}
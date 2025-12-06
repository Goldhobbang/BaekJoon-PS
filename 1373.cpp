#include <iostream>
#include <string>
using namespace std;

int main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;

    while(s.length() % 3 != 0) {
        s = "0" + s;
    }
    string result = "";
    for(int i = 0; i < s.length(); i += 3) {
        int num = (s[i]-'0')*4 + (s[i+1]-'0')*2 + (s[i+2]-'0');
        cout << num;
    }
    
    return 0;
}
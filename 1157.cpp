#include <iostream>
#include <algorithm>
using namespace std;


struct alphaCount{
    char alpha;
    int count;
};
struct alphaCount alpha[26];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    string s;
    cin >> s;
    int N = s.size();
    for(int i = 0 ; i < 26; i++){
        alpha[i].alpha = 'A' + i;
        alpha[i].count = 0;
    }
    for(int i = 0 ; i < N; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            alpha[s[i] - 'a'].count++;
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            alpha[s[i] - 'A'].count++;
        }
    }
    sort(alpha, alpha + 26, [](const alphaCount &a, const alphaCount &b){
        return a.count > b.count;
    });
    if(alpha[0].count == alpha[1].count) cout << "?\n";
    else
    cout << alpha[0].alpha << '\n';

    return 0;
}   
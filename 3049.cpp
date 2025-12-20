#include <iostream>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    long long N;
    cin >> N;
    if(N==3){cout << 0;return 0;}
    cout << (N*(N-1)*(N-2)*(N-3))/24;
    return 0;
}
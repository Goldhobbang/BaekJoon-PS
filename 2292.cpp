#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    long long N;
    int cnt=1;
    cin >> N;
    long long lim=1;
    for(int i = 1 ; lim < N;i++){
        lim = 3*(i*(i+1))+1;
        cnt++;
    }
    cout << cnt;
    return 0;
}
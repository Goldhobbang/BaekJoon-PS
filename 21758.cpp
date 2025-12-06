#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int honey[100001];
    cin >> N;
    int ans=0;
    int min_honey = 10001;
    for(int i = 0 ; i < N; i++){
        cin >> honey[i];
        min_honey = min(min_honey, honey[i]);
        ans+=honey[i];
    }
    ans -= min_honey;
    ans -= honey[0];
    ans -= honey[N-1];
    cout << ans;
    return 0;
}
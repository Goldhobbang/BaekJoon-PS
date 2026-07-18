#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,Q;
    cin >> N >> Q;
    vector<int> n(N);
    vector<int> q(Q);
    for(int i = 0 ; i < N ; i ++){
        cin >> n[i];
    }
    sort(n.begin(), n.end());
    int cnt = 0;
    for(int i = 0 ; i < Q ; i ++){
        cin >> q[i];
        if(binary_search(n.begin(), n.end(), q[i]) == false){
            cout << q[i] << ' ';
            cnt++;
        };
    }
    if(cnt == 0){
        cout << "-1";
    }

    return 0;
}
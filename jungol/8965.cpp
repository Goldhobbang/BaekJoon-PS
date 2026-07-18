#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    cin >> N;
    vector<int> v(N);
    for(int i = 0 ; i < N ; i ++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // cout << "v:" << " ";
    // for(int i = 0 ; i < N ; i ++){
    //     cout << v[i] << " ";
    // // }
    // cout << "\n";
    int mindex = N;
    int minum = N;
    // cout << "mindex:" << mindex << "\n";
    // 중앙값보다 큰 곳
    for(int i = (N/2) ; i < N-1 ; i++){
        if(v[i] != v[i+1]){
            minum = min(minum, (N-2*i)*-1);
            mindex = i+1;
            break;
        }
        // cout << "v:" << v[i] << " ";
    }
    // `` 작은곳
    for(int i = (N/2) ; i >= 0 ; i--){
        if(v[i] != v[i-1]){
            int diff = abs(N - 2 * i);
            if(diff <= minum){
                minum = diff;
                mindex = i;
            }
            break;
        }
        // cout << "v:" << v[i] << " ";
    }
    // cout << "minum:" << minum << "\n";
    // double x = ((minum-N/2)*(float)(-1)+1);
    cout << v[mindex] << "\n";
    return 0;
}
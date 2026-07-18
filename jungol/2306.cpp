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
    int l_p = 0;
    int r_p = N - 1;
    int best_l = v[l_p], best_r = v[r_p];
    int min_sum = abs(v[l_p] + v[r_p]);
    while (l_p < r_p) {
    int sum = v[l_p] + v[r_p];
    if (abs(sum) < min_sum) {
        min_sum = abs(sum);
        best_l = v[l_p];
        best_r = v[r_p];
    }
    if (sum < 0) {
        l_p++;
    } else {
        r_p--;
    }
}

    cout << best_l << " " << best_r;
    return 0;
}
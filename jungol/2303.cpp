#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    long long N;
    cin >> N;
    vector<long long> v(N);
    for(long long i = 0 ; i < N ; i ++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    // while(N--){
    //     cout << v[N] << '\n';
    // }
    long long best_l;
    long long best_r;
    long long best_m;    
    best_l = v[0], best_r = v[N-1], best_m = v[1];
    long long min_sum = best_l + best_r + best_m;
    for(long long i = 0 ; i < N-1 ; i++){
        long long l_p = i;
        long long m_p = i+1;
        long long r_p = N-1;
        while (m_p < r_p) {
            long long sum = v[l_p] + v[m_p] + v[r_p];
            if (abs(sum) < abs(min_sum)) {
                min_sum = abs(sum);
                best_l = v[l_p];
                best_r = v[r_p];
                best_m = v[m_p];
            }
            if (sum < 0) {
                m_p++;
            } else {
                r_p--;
            }
    }
}

    cout << best_l << " " << best_m << " " << best_r;
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <tuple>
using namespace std;

bool compare(const tuple<int, int, int>& a, const tuple<int, int, int>& b) {
    if (get<2>(a) != get<2>(b)) {
        return get<2>(a) < get<2>(b);
    }
    return tie(get<0>(a), get<1>(a)) < tie(get<0>(b), get<1>(b));
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    vector<tuple<int, int,int>> arr(N);
    int X;
    for(int i = 0 ; i < N ; i ++){
        cin >> get<0>(arr[i]) >> get<1>(arr[i]);
    }
    cin >> X;
    for(int i = 0 ; i < N ; i ++){
        get<2>(arr[i]) = X*get<0>(arr[i]) + get<1>(arr[i]);
    }
    stable_sort(arr.begin(), arr.end(), compare);
    for(int i = 0 ; i < N ; i ++){
        cout << get<0>(arr[i]) << " " << get<1>(arr[i]) << "\n";
    }
    return 0;
}
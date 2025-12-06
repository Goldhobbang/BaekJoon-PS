#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    vector<int> arr(N);
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i = 0 ; i < M ; i++){
        int a,b;
        int front;
        int back;
        cin >> a >> b;
        auto fr = lower_bound(arr.begin(), arr.end(), a);
        front = fr - arr.begin();

        auto ba = upper_bound(arr.begin(), arr.end(), b);
        back = ba - arr.begin();
        cout << back - front << '\n';
    }
    return 0;
}
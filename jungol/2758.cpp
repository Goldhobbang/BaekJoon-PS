#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int sung[105];
int han[105];
int N;
int find(int n){
    for(int i = 0 ; i < N ; i ++){
        if(sung[i] > n){
            return i;
        }
    }
    if(sung[N-1] == n) return -2;
    return -1;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> N;
    int cnt = N;
    for(int i = 0 ; i < N ; i ++){
        cin >> sung[i];
    }
    for(int i = 0 ; i < N ; i ++){
        cin >> han[i];
        // if(find(han[i]) == -1){
        //     cnt--;
        // } else {
        //     sung[find(han[i])] = 0;
        //     cnt++;
        // }
    }
    sort(han,han+N);
    sort(sung,sung+N);
    for(int i = 0 ; i < N ; i ++){
        if(find(han[i]) != -1){
            sung[find(han[i])] = 0;
            cnt++;
        }
        else {
            cnt--;
        }
    }
    cout << cnt << "\n";
    return 0;
}
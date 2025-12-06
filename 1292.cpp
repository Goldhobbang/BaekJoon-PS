#include <iostream>
#include <vector>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    vector<int> arr(1100);
    cin >> N >> M;
    int sum=0;
    int cnt=0;
    for(int i = 1 ; cnt < 1001; i++){
        
        for(int j = 0 ; j < i; j++){
            arr[cnt] = i;
            cnt++;
        }
    }
    for(int i = N-1; i< M; i++){
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
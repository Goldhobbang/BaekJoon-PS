#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    char arr[20001];
    int K;
    cin >> N >> K;
    cin >> arr;
    int cnt = 0;
    for(int i = 0; i < N ; i++){
        if(arr[i]=='P'){
            for(int j = i - K; j <= i + K; j++){
                if(j < 0 || j >= N) continue;
                if(arr[j] == 'H'){
                    arr[j] = 'X';
                    cnt++;
                    break;
                }
            }
        }

    }
    cout << cnt;
    return 0;
}
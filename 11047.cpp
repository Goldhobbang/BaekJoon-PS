#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int arr[11];
    int money;

    cin >> N >> money;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
    }

    int cnt = 0;
    for(int i = N-1; i >= 0; i--){
        if(money >= arr[i]){
            cnt += money / arr[i];
            money = money % arr[i];
        }
    }
    cout << cnt;
    return 0;
}
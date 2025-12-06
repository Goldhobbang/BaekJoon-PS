#include <iostream>

using namespace std;
int main(){
    int N;
    int arr[100001] = {0};
    int cnt = 0;
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 1 ; i < N; i++){
        if(arr[i] <= arr[i-1]) cnt++;
    }
    cout << cnt << '\n';
    return 0;
}
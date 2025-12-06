#include <iostream>
int cnt = 1;
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,T;
    int arr[12] = {1,2,4,7};
    for(int i = 4 ; i < 11; i++){
        arr[i] = arr[i-1]+arr[i-2]+arr[i-3];
    }
    cin >> T;
    while(T--){
        cin >> N;
        cout << arr[N-1] << "\n";
    }
    return 0;
}
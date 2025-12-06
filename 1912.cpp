#include <iostream>
using namespace std;
int N,arr[100001];
int maxer(int n);

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);

    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
    }
    return 0;
}
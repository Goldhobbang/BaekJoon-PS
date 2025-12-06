#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    int arr[100001];
    cin >> N >> M;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
    }
    sort(arr,arr+N);
    int mini = 2000000001;
    for(int i = 0;i<N;i++){
        int j;
        for(j = 1; arr[i+j]-arr[i]<M;j++);
        mini = min(mini,arr[i+j]-arr[i]);
    }
    cout << mini;
    return 0;
}
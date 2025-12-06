#include <vector>
#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,P,New;
    int arr[60];
    cin >> N >> New >> P;
    int rank = 1;
    for(int i = 1 ; i <= N; i++){
        cin >> arr[i];
    }
    if(arr[N] >= New && N==P){
        cout << -1;
        return 0;
    }
    arr[0] = 2000000001;
    for(int i = 1 ; i <= N+1; i++){
        if(arr[i] != arr[i-1]){
            rank = i;
        }
        if(arr[i] <= New){
            break;
        }
    }
    cout << rank;
    return 0;
}
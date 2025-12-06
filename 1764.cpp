#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    string arr[500001];
    string ans[500001];
    cin >> N >> M;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < M; i++){
        string tmp;
        cin >> tmp;
        for(int j = 0 ; j < N; j++){
            if(arr[j] == tmp){
                ans[i] = arr[j];
            }
        }
    }
    sort(ans,ans+M);
    for(int i = 0 ; i < M; i++){
        if(ans[i] != ""){
            cout << ans[i] << '\n';
        }
        else return 0;
    }
    return 0;
}
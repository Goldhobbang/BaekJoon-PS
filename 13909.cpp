#include <iostream>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    int cnt=0;
    for(long long i = 1 ; i <= N; i++){
        if(i*i <= N){
            cnt++;
        }
        else{
            break;
        }
    }
    cout << cnt;
    return 0;
}
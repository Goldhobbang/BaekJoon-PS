#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int cnt=0;
    cin >> N;
    int A;
    for(int i = 0 ; i < 5; i++){
        cin >> A;
        if(A==N) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}
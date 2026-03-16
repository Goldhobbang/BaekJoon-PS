#include <iostream>
#include <cmath>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int ans=1;
    cin >> N;
    for(int i = 0 ; i < N/2 ; i ++){
        ans *= 2;
        ans %= 10007; 
    }
    if(N%2==0){
        cout << ans + N-2;
    }
    return 0;
}
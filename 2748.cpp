#include <iostream>

int fibo(int N){
    if(N<=2) return 1;
    else{
        return fibo(N-1)+fibo(N-2);
    }
}
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    cin >> N;
    cout << fibo(N);
    return 0;
}
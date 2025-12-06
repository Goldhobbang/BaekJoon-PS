#include <iostream>
#include <math.h>
using namespace std;
void kan(int N){
    int size = pow(3,N-1);
    if(N < 1){
        cout << "-";
        return;
    }
    kan(N-1);
    while(size--){
        cout << " ";
    }
    kan(N-1);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    while(cin >> N){
        kan(N);
        cout << "\n";
    }
    return 0;
}
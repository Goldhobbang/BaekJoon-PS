#include <iostream>
using namespace std;
int pow(int A, int B){
    if(B==0) return 1;
    return pow(A,B-1) * A; 
}
void kan(int N, int C){
    int size = pow(3,N-1);
    int size2 = pow(3,C-1);
    if(N < 1 || C<1){
        cout << "-";
        return;
    }
    kan(N-1,C-1);
    while(size--){
        cout << " ";
    }
    kan(N-1,C-1);
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N; 
    for(int i = 0; i < N;i++){
        kan(N,N);
        cout << "\n";
    }
    return 0;
}
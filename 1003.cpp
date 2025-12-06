#include <iostream>
using namespace std;
long long int o[41],z[41];

int fibo_z(int n) {
    long long int result = 0;
    if(z[n] != -1) return z[n];
    else if (n == 0) return 1;
    else if(n==1) return 0;
    else {
        result = fibo_z(n-1) + fibo_z(n-2);
    }
    return z[n] = result;
}
int fibo_o(int n) {
    int result = 0;
    if(o[n] != -1) return o[n];
    else if (n == 0) return 0;
    else if(n==1) return 1;
    else {
        result = fibo_o(n-1) + fibo_o(n-2);
    }
    return o[n] = result;
}
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    cin >> N;
    for(int i = 0 ; i < N; i++){
        fill(o,o+41,-1);
        fill(z,z+41,-1);
        int n;
        cin >> n;
        cout << fibo_z(n) << " " << fibo_o(n) << "\n";
    }
    return 0;
}
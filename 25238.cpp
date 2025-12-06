#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    double N,M;

    cin >> N >> M;
    if(N*((100-M)/100.0) >= 100) cout << "0";
    else cout << "1";
    return 0;
}
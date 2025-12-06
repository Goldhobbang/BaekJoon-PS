#include <iostream>
using namespace std;

int gcd(int A, int B) {
    if (A % B == 0)
        return B;
    else
        return gcd(B, A % B);
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int T;
    int N;
    cin >> T;
    int arr[1001];
    int cnt=0;
    for(int i = 1 ; i <= 1000; i++){
        for(int k = 1;k<i;k++){
            if(gcd(i,k) == 1){
                cnt++;
            }
        }
        arr[i] = 2*cnt+3;
    }
    for(int i = 0 ; i< T;i++){
        cin >> N;
        cout << arr[N] << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;

int isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int cnt=0;
    int arr[100];
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
        if(isPrime(arr[i])==0 || arr[i]==1){
            arr[i] = 0;
        }
        if(arr[i]!=0){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
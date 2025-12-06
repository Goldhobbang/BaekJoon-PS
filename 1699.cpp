#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int arr[100003];

int sq(int N){
    // cout << "N : " << N << "\n";
    int result=N;
    if(N==0) return 0; 
    else if(N==1) return 1;
    else if(arr[N]!=-1) return arr[N];
    else{
        for(long long i = 1 ; i * i <= N;i++){
            long long temp = i*i;
            result = min(result,sq(N-temp)+1);
        }
    }
    return arr[N] = result;
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;

    cin >> N;
    fill(arr,arr+N+1,-1);
    cout << sq(N);
    return 0;
}
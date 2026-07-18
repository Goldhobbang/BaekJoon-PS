#include <iostream>
using namespace std;

int arr[101];
int inmax = -10000000;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i <= N-M ; i++){
        int sum = 0;
        for(int j = i ; j < i+M ; j++){
            sum += arr[j];
        }
        if(sum > inmax){
            inmax = sum;
        }
    }
    cout << inmax;
    return 0;
}
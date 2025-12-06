#include <iostream>
using namespace std;


int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    int arr[1001];
    cin >> N;
    int maxnum = -1;
    double sum=0;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
        maxnum = max(maxnum, arr[i]);
    }
    for(int i = 0 ; i < N; i++){
        sum += (arr[i]/(double)maxnum)*100;
    }
    cout << sum/N;
    return 0;
}
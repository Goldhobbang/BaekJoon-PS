#include <iostream>
#include <algorithm>
#include <vector>  
using namespace std;


pair<int, int>  arr[1001];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,C,i;
    cin >> N >> C;
    int arr2[1001];

    for(i = 0 ; i < N; i++){
        cin >> arr2[i];
        int a = arr2[i];

        if(!arr[a].first) arr[a].second = N-i-1;
        arr[a].first++;
    }

    stable_sort(arr,arr+N,greater<>());
    for(int i = 0; i<N ;i++){
        cout << arr2[N-arr[i].second-1] << ' ' << arr[i].second << ' ' << arr[i].first << endl;
        for(int j = 0 ; j < arr[i].first ; j++){
            cout << arr2[N-arr[i].second-1] << ' ';
        }
    }
    return 0;
}
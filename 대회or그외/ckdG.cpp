#include <iostream>

using namespace std;
int main(){
    int N;
    int arr[101];
    int max = 0; int min = 1001;
    cin >> N;
    for(int i = 0 ; i < N; i++){
        cin >> arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    if(arr[0] == max) cout << "hard";
    else if(arr[0] == min) cout << "ez";
    else cout << "?";
    return 0;
}
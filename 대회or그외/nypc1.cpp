#include <iostream>

using namespace std;
int main(){
    int N;
    long long cnt=0;
    int arr[100002];
    int visit[100002]={0};
    cin >> N;
    for(int i = 1 ; i <= N; i++){
        cin >> arr[i];
    }
    for(int i = N ; i >= 1; i--){
        if (arr[i] <= N) {
            ++visit[arr[i]];
            if (visit[arr[i]] > 1) {
                cnt += i;
            }
        } else {
            cnt += i;
        }
        // for(int i = 1 ; i <= N; i++){
        //     cout << visit[i] << " ";
        // }
        // cout << endl;
        }
    cout << cnt;
    return 0;
    }
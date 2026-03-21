#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    cin >> N >> M;
    string arr[55];
    int maxSide=1;
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }

    for(int i = 0 ; i < N ; i ++){
        for(int j=0;j<M;j++){
            int cnt=1;
            int k=0;
            while(i+k < N && j+k < M){
                if(arr[i][j]==arr[i+k][j+k] && arr[i][j]==arr[i+k][j] && arr[i][j]==arr[i][j+k]){
                    maxSide = max(k+1,maxSide);
                }
                k++;
            }
        }
    }
    cout << maxSide*maxSide;
    return 0;
}
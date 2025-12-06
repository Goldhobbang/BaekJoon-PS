#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
unsigned int arr[1100][1100];

int dp(int X,int Y,int S){
    // if(X > S || Y > S){
    //     return 0;
    // }
    if(S==2){
        vector<unsigned int> v;
        v.push_back(arr[X][Y]);
        v.push_back(arr[X][Y+1]);
        v.push_back(arr[X+1][Y]);
        v.push_back(arr[X+1][Y+1]);
        sort(v.begin(),v.end());
        return v[1];
    }

    else{
        S/=2;
        vector<unsigned int> v;
        v.push_back(dp(X+S,Y+S,S));
        v.push_back(dp(X+S,Y,S));
        v.push_back(dp(X,Y+S,S));
        v.push_back(dp(X,Y,S));
        sort(v.begin(),v.end());
        return v[1];
    }
}

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N;
    cin >> N;
    for(int i = 0 ; i < N; i++){
        for(int j = 0 ; j < N; j++){
            cin >> arr[i][j];
        }
    }
    if(N==1){
        cout << arr[0][0];
        return 0;
    }
    cout << dp(0,0,N);
    return 0;
}
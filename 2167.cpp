#include <iostream>

using namespace std;
int main(){
    int N,M;
    int cnt[10001]={0};
    int I,J,x,y;
    int arr[301][301];
    cin >> N>>M;
    for(int i = 1 ; i <= N; i++){
        for(int j = 1 ; j <= M; j++){
            cin >> arr[i][j];
        }
    }
    int a;
    cin >> a;
    for(int i = 0 ; i < a; i++){
        cin >> I >> J >> x >> y;

        for(int j =I; j<=x ; j++){
            for(int z =J; z<=y ; z++){
                cnt[i]+=arr[j][z];
            }   
        }

    }
    for(int i=0; i<a ; i++){
        cout << cnt[i] << endl;
    }
    return 0;
}
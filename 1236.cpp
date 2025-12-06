#include <iostream>
using namespace std;

int col[51];
int row[51];

int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M;
    int r1=0,c1=0;
    int cnt=0;
    char arr[51][51];
    cin >> N >> M;
    for(int i = 0 ; i < N; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> arr[i][j];
            if(arr[i][j]=='X'){
                row[j] = 1;
                col[i] = 1;
            }
        }
    }
    for(int i = 0; i < N ; i++){
        if(col[i]==0){
            c1++;
        }
    }
    for(int i = 0; i < M ; i++){
        if(row[i]==0){
            r1++;
        }
    }
    cout << max(r1,c1);
    return 0;
}

#include <iostream>

using namespace std;
int main(){
    int N=1,M=1;
    int i,j;
    int arr[501][501];
    cin >> N >> M;
    for(i = 0 ; i < N; i++){
        for(j = 0 ; j < M; j++){
            cin >> arr[i][j];
        }
    }
    if(N*M%2==0){
        cout << "Yes" << endl;
        if(N%2==0){
            for(int i = 0 ; i < N; i++){    
                if(i%2==0){
                    for(int j = 0 ; j < M; j++){
                    cout << arr[i+1][j] << " ";
                    }
                }
                else{
                    for(int j = 0 ; j < M; j++){
                    cout << arr[i-1][j] << " ";
                    }
                }
                cout << endl;
            }
        }
        else{
            for(int i = 0 ; i < N-1; i++){
                if(i%2==0){
                    for(int j = 0 ; j < M; j++){
                    cout << arr[i+1][j] << " ";
                    }
                }
                else{
                    for(int j = 0 ; j < M; j++){
                    cout << arr[i-1][j] << " ";
                    }
                }
                cout << endl;
            }
            for(int i=0;i<M;i++){
                if(i%2==0) cout << arr[N-1][i+1] << " ";
                else cout << arr[N-1][i-1] << " ";
            }
        }
    }
    else cout << "No";
    return 0;
}
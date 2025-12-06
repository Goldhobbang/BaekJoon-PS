#include <iostream>
using namespace std;
int main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int N,M,Q;
    int cmd;
    cin >> N>>M>>Q;
    int row[500001]={0};
    int col[500001]={0};
    for(int i = 0 ; i < Q; i++){
        cin >> cmd;
        if(cmd == 1){
            int r,v;
            cin >> r >> v;
            row[r-1]+=v;
        }
        else if(cmd == 2){
            int r,v;
            cin >> r >> v;
            col[r-1]+=v;
        }
    }
    for(int i = 0 ; i < N;i++){
        for(int j = 0 ; j < M;j++){
            if(j<M-1) cout << row[i]+col[j] << " ";
            else cout << row[i]+ col[j];
        }
        cout << "\n";
    }
    return 0;
}